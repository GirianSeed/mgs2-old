zlibdec 1.1.3 (for PlayStation 2)

Summary of Changes
----------------------------------------------------------------
Removed the following source files:
- compress.c
- crc32.c
- deflate.c
- deflate.h
- gzio.c
- trees.c
- trees.h
- uncompr.c
- zutil.c

- Replace memory allocation with a bump allocator
- Remove zalloc from z_stream
- Remove zfree from z_stream
- Move data_type and adler before opaque in z_stream
- Redefine uLong as unsigned int
- Use static data instead of allocating codes struct
- Use stack arrays instead of allocation for huft work area
- Remove BUILDFIXED path for inflate_trees_fixed
