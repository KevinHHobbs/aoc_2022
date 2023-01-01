#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <set>
#include <string>

int main(int argc, char * argv[]) {
	std::ifstream input_file;
	input_file.open( argv[1] );
	std::string line;
	while ( std::getline(input_file, line) ) {
    std::set<char> A (line.begin(), line.begin() + line.size() / 2 );
    std::set<char> B (line.begin() + line.size() / 2, line.end() );
    std::set<char> I;
    std::set_intersection(
      A.begin(), A.end(),
      B.begin(), B.end(),
      std::inserter(I, I.begin())
    );
    std::cout << *I.begin() << std::endl;
	}


  return EXIT_SUCCESS;
} 
