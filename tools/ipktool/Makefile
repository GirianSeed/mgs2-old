#!/usr/bin/make -f
.PHONY: all clean clear

CPPFLAGS    += -DDEBUG_PRINT
CFLAGS      += -Wall -Wno-unused-function -Wno-unused-label
LDFLAGS     += -Wl,-Map,$@.map

TARGET      ?= ipktool
SRC_FILES   := ipktool.c myfsutil.c xmalloc.c
OBJ_FILES   := ipktool.o myfsutil.o xmalloc.o

all: $(TARGET)

$(TARGET): $(OBJ_FILES)

clean:
	-$(RM) *.o *.map
	-$(RM) $(TARGET)
clear:
	-$(RM) *.bin
	-$(RM) *.irx
