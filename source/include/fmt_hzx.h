#ifndef __MGS2_FMT_HZX_H__
#define __MGS2_FMT_HZX_H__

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/*---------------------------------------------------------------------------*/
/**
 * Hazard patrol point
 *
 * Individual point of an enemy soldier's patrol route.
 * Includes behavior command data (aim position, which direction to face, etc.)
 */
typedef struct _HZX_PTP {
    float       x, z, y;        // position
    float       ax, az, ay;     // aim position
    u_short     action;
    u_short     time;
    u_short     dir;            // 1.12 fixed-point
    u_short     move;
    u_int       flag;
    u_int       group_id;
} HZX_PTP;

/**
 * Hazard patrol route
 *
 * Complete enemy soldier patrol route data.
 * Defines the number of points and starting point for the soldier.
 */
typedef struct _HZX_PAT {
    u_short     n_points;
    u_short     init_point;
    HZX_PTP     *points;
    u_int       pad;            // always zero
} HZX_PAT;

/*---------------------------------------------------------------------------*/
/**
 * Hazard clearing patrol point
 *
 * Individual point of an enemy soldier's patrol route used during clearing.
 * Includes behavior command data (aim position, which direction to face, etc.)
 */
typedef struct _HZX_CPTP {
    float       x, z, y;        // position
    float       ax, az, ay;     // aim position
    u_short     action;
    u_short     time;
    u_short     dir;            // 1.12 fixed-point
    u_short     move;
    u_int       group_id;
} HZX_CPTP;

/**
 * Hazard clearing patrol route
 *
 * Complete enemy soldier patrol route data used during clearing.
 * Defines the number of points and starting point for the soldier.
 */
typedef struct _HZX_CPAT {
    u_short     n_points;
    u_short     init_point;
    u_int       unknown1[2];
    HZX_CPTP    *points;
} HZX_CPAT;

/**
 * Hazard clearing segment
 *
 * Data used to configure clearing formations.
 * Defines a bounding box that triggers clearing of the player area,
 * as well as a number of patrol routes for guards to sweep the area.
 */
typedef struct _HZX_CLR {
    FVECTOR     min;
    FVECTOR     max;
    u_int       unknown1;
    u_short     unknown2;
    u_short     n_patrols;
    HZX_CPAT    *patrols;
    u_int       unknown3;
} HZX_CLR;

/*---------------------------------------------------------------------------*/
/**
 * Hazard camera
 *
 * Camera angle data for "behind mode".
 * Defines a bounding box that triggers the camera view,
 * as well as angles for behind, right, and left.
 */
typedef struct _HZX_CAM {
    FVECTOR     b1, b2;
    float       b_cam_x, b_cam_y, b_cam_z;
    float       b_tgt_x, b_tgt_y, b_tgt_z;
    float       r_cam_x, r_cam_y, r_cam_z;
    float       r_tgt_x, r_tgt_y, r_tgt_z;
    float       l_cam_x, l_cam_y, l_cam_z;
    float       l_tgt_x, l_tgt_y, l_tgt_z;
    u_int       flag;
    u_int       value;
} HZX_CAM;

/*---------------------------------------------------------------------------*/
/**
 * Hazard zone
 *
 * Individual sector of the hazard map's navmesh.
 */
typedef struct _HZX_ZON {
    float       x, z, y;
    float       w, h;
    u_short     flag;
    u_char      nears[6];
    u_char      dists[6];
    u_char      links[6];
    u_char      safes[4];
    u_int       unknown1;
    u_int       unknown2[4];
} HZX_ZON;

#define HZX_NO_ZONE (0xFF)

/*---------------------------------------------------------------------------*/
/**
 * Hazard object
 *
 * Individual object of a hazard volume containing vertices.
 *
 * The purpose of splitting the volume into objects is currently unknown,
 * but the initial assumption is that this supports strip rendering.
 */
typedef struct _HZX_OBJ {
    SVECTOR     min;            // vw = n_vertices, aligned to 16 bytes
    SVECTOR     max;            // vw = line loop size for floors
    SVECTOR     *vertices;
    u_int       flag;
    u_int       units;          // Set to number of 16-byte vertex units at run-time
    void        *reference;     // Used for space at run-time
} HZX_OBJ;

/*---------------------------------------------------------------------------*/
/**
 * Hazard trap (a.k.a "trigger volume")
 *
 * Named bounding box that triggers an event when an actor enters
 * or exits its dimensions.
 */
typedef struct _HZX_TRP {
    SVECTOR     b1, b2;
    u_int       name;
} HZX_TRP;

/*---------------------------------------------------------------------------*/
/**
 * Hazard volume
 *
 * Individual volume of a hazard group containing objects and traps.
 *
 * The purpose of splitting the group into volumes is currently unknown,
 * but the initial assumption is that off-camera volumes aren't processed.
 */
typedef struct _HZX_VLM {
    int         x, z, y;
    u_char      pad1[0x8];
    u_short     n_navmesh_walls;
    u_short     n_navmesh_floors;
    u_short     n_hitmesh_walls;
    u_short     n_hitmesh_floors;
    u_short     n_traps;
    u_short     index;
    HZX_OBJ     *navmesh_walls;
    HZX_OBJ     *navmesh_floors;
    HZX_OBJ     *hitmesh_walls;
    HZX_OBJ     *hitmesh_floors;
    HZX_TRP     *traps;
} HZX_VLM;

/*---------------------------------------------------------------------------*/
/**
 * Hazard group
 *
 * Individual group of the hazard map containing cameras, zones, volumes,
 * and dynamic data.
 * Groups can be selectively enabled and disabled by door triggers,
 * saving processing time by skipping rooms hidden behind closed doors.
 */
typedef struct _HZX_GRP {
    u_int       n_cameras;
    u_int       n_zones;
    HZX_CAM     *cameras;
    HZX_ZON     *zones;
    u_int       n_links;
    u_short     *links;
    u_char      *unknown1;
    u_int       *adjacency;
    u_int       pad1;
    u_short     *navigation[4];
    u_int       x, y, z;        // position
    u_int       sx, sy, sz;     // scale
    int8        rx, ry, rz;     // range
    u_char      pad2;
    u_short     n_volumes;
    u_short     unknown2;       // Seems to always match n_volumes
    HZX_VLM     *volumes;
    void        *dynamic;       // Used for space at run-time
} HZX_GRP;

/*---------------------------------------------------------------------------*/
/**
 * Hazard map
 *
 * Header of the hazard map containing all groups, patrols, and clears.
 */
typedef struct _HZX_MAP {
    u_short     version;
    u_short     n_groups;
    u_short     n_patrols;
    u_short     n_clears;
    u_char      pad[32];        // Used for space at run-time
    HZX_PAT     *patrols;
    HZX_PTP     *points;
    HZX_CLR     *clears;
    HZX_CPAT    *cpatrols;
    HZX_CPTP    *cpoints;
    HZX_GRP     *groups;
} HZX_MAP;

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
