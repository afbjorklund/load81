PKGS=lua5.1 sdl2 SDL2_gfx SDL2_image
CFLAGS=-O2 -Wall -W $(shell pkg-config --cflags $(PKGS))
LDLIBS=-lm $(shell pkg-config --libs $(PKGS))

all: load81 

load81: load81.o editor.o framebuffer.o
editor.o: editor.c editor.h framebuffer.h
framebuffer.o: framebuffer.c framebuffer.h bitfont.h
load81.o: load81.c framebuffer.h editor.h load81.h

clean:
	rm -f load81 *.o

distclean: clean

dep:
	$(CC) -MM *.c
