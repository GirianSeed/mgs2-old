#!/usr/bin/make -f
#
# ipktool Makefile
#
.PHONY: all clean clear

CPPFLAGS    += -I../include
CPPFLAGS    += -DDEBUG_PRINT

CFLAGS      += -Wall -Wno-unused-function -Wno-unused-label
LDFLAGS     += -Wl,-Map,$@.map

TARGET      ?= ipktool
SRCS        := ipktool.c myfsutil.c xmalloc.c
OBJS        := $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)

clean:
	-$(RM) *.o *.map
	-$(RM) $(TARGET)
clear:
	-$(RM) *.bin
	-$(RM) *.irx
