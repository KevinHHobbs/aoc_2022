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
    std::cout << "A: ";
    for (std::set<char>::iterator it = A.begin(); it != A.end(); ++it) {
      std::cout << *it << " ";
    }
    std::cout << "B: ";
    for (std::set<char>::iterator it = B.begin(); it != B.end(); ++it) {
      std::cout << *it << " ";
    }
    std::cout << std::endl;
	}


      	return EXIT_SUCCESS;
} 
