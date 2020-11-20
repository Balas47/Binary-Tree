CXX = c++
CXXFLAGS= -Wall -O3

TARGETS = driver.cpp binary.o
SOURCES = binary.h binary.cpp

bst.out: $(TARGETS)
	$(CXX) $(CXXFLAGS) $(TARGETS) -o bst.out

binary.o: $(SOURCES)
	$(CXX) $(CXXFLAGS) -c binary.cpp
