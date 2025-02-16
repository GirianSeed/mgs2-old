#!/usr/bin/make -f
.PHONY: all clean

CFLAGS          += -Wall
LDFLAGS         += -L. #-Wl,-Map,$@.map
LDLIBS          += -lstrcode
ARFLAGS         = -crsU

LIBNAME         = libstrcode
TARGET          = strcode
TARGET1         = strcode16
TARGET2         = strcode24
TARGET3         = strcode32

all: $(LIBNAME).a $(TARGET) $(TARGET1) $(TARGET2) $(TARGET3)

$(LIBNAME).a: strcode.o
	$(AR) $(ARFLAGS) $@ $^

$(TARGET): main.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

$(TARGET1): CPPFLAGS += -DUSE_MGS1_STRCODE_ONLY
$(TARGET1): main.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

$(TARGET2): CPPFLAGS += -DUSE_MGS2_STRCODE_ONLY
$(TARGET2): main.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

$(TARGET3): CPPFLAGS += -DUSE_ZOE1_STRCODE_ONLY
$(TARGET3): main.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

clean:
	-$(RM) $(TARGET)
	-$(RM) $(TARGET1)
	-$(RM) $(TARGET2)
	-$(RM) $(TARGET3)
	-$(RM) $(LIBNAME).a
	-$(RM) *.o *.map
