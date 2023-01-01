#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char * argv[]) {
	std::ifstream input_file;
	input_file.open( argv[1] );
	std::string line;
	while ( std::getline(input_file, line) ) {
		char opponent_plays = line[0];
		char my_play = line[2];
		std::cout << "them : " << opponent_plays << ", me : " << my_play << std::endl; 
	}
      	return EXIT_SUCCESS;
} 
