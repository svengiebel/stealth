CXX=g++
CXXFLAGS=-g -Wall -Wextra
LDFLAGS=-lsfml-system -lsfml-window -lsfml-graphics

all: assets.h main.o

assets.h:
	cd assets && ./headerify.sh ../assets.h

%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)