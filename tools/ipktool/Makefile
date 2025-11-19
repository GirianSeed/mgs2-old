#!/usr/bin/make -f
#
# ipktool Makefile
#

CPPFLAGS    += -I../include
CPPFLAGS    += -DDEBUG_PRINT

CFLAGS      += -Wall -Wno-unused-function -Wno-unused-label
LDFLAGS     += -Wl,-Map,$@.map

TARGET      ?= ipktool
SRCS        := ipktool.c myfsutil.c xmalloc.c
OBJS        := $(SRCS:.c=.o)

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJS)

.PHONY: clean
clean:
	-$(RM) *.o *.map
	-$(RM) $(TARGET)

.PHONY: clear
clear:
	-$(RM) *.bin
	-$(RM) *.irx
