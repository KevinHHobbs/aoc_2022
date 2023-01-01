CXX=g++
CXXFLAGS=-g -Wall -Werror

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<
