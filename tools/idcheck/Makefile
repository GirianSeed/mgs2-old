#!/usr/bin/make -f
#
# idcheck Makefile
#

CPPFLAGS    += -I../include -I../strcode
#CPPFLAGS    += -DALLOW_DOT_IN_BASENAME

CFLAGS      += -Wall -Wno-unused-function -Wno-unused-label
LDFLAGS     += -L../strcode #-Wl,-Map,$@.map
LDLIBS      += -lstrcode

TARGET      ?= idcheck
SRCS        := idcheck.c wildcard.c
OBJS        := $(SRCS:.c=.o)

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ $(LDFLAGS) $(LDLIBS) -o $@

# enable wildcard expansion for mingw-w64
wildcard.o: CPPFLAGS += -D__ENABLE_GLOBBING=-1

.PHONY: clean
clean:
	-$(RM) $(OBJS) *.map
	-$(RM) $(TARGET)
