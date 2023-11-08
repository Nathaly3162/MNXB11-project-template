CXX := g++
CXXWARNINGS := -Wall -Wextra -Werror
CXXOPT := -O3
CXXSTD := -std=c++17
INCLUDES := -I include -I external/include -I $(shell root-config --incdir)
CXXFLAGS := $(CXXWARNINGS) $(CXXSTD) $(CXXOPT) $(INCLUDES)  
LDFLAGS := $(shell root-config --glibs) 

.PHONY: all clean

all: main

main: main.cxx src/Example.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

src/%.o: src/%.cxx
	$(CXX) $(CXXFLAGS) $^ -c -o $@

clean:
	rm -v src/*.o main
