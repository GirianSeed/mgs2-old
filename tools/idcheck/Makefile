#!/usr/bin/make -f
#
# idcheck Makefile
#
.PHONY: all clean

CPPFLAGS    += -I../ipktool
#CPPFLAGS    += -DALLOW_DOT_IN_BASENAME

CFLAGS      += -Wall -Wno-unused-function -Wno-unused-label
LDFLAGS     += #-Wl,-Map,$@.map

TARGET      ?= idcheck
SRCS        := idcheck.c strcode.c wildcard.c
OBJS        := $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)

# enable wildcard expansion for mingw-w64
wildcard.o: CPPFLAGS += -D__ENABLE_GLOBBING=-1

clean:
	-$(RM) $(OBJS) *.map
	-$(RM) $(TARGET)
