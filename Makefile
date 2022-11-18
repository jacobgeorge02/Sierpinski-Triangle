CC = g++
CFLAGS = -std=c++14 -Wall -Werror -pedantic
T_OBJECTS = TFractal.cpp Triangle.cpp
HEADERS = Triangle.h
LIBS = -lsfml-graphics -lsfml-window -lsfml-system

all: TFractal

TFractal: $(T_OBJECTS)
	$(CC) $(CFLAGS) -o TFractal $(T_OBJECTS) $(LIBS)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $< 

clean:
	rm TFractal