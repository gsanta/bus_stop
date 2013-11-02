#	Makefile for Phigs examples

APPS = bus_stop
OBJ = texture.o bitmap.o $(APPS).o
SRC = texture.c bitmap.c $(APPS).c

CFLAGS = $(C_OPTS) -I/usr/include
LIBS = -L/usr/X11R6/lib -lX11 -lglut -lGL -lGLU -lm -lpthread
  
application:$(APPS)

clean:
	rm -f $(APPS) *.raw *.o core a.out

realclean:	clean
	rm -f *~ *.bak *.BAK

.SUFFIXES: c o
.c.o:
	$(CC) -c $(CFLAGS) $<

$(APPS): $(OBJ) 
	$(CC) -o $(APPS) $(CFLAGS) $(OBJ) $(LIBS)

depend:
	makedepend -- $(CFLAGS) $(SRC)


