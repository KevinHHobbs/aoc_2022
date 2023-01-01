#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char * argv[]) {
	std::ifstream input_file;
	input_file.open( argv[1] );
	std::string line;
	size_t total_score = 0;
	while ( std::getline(input_file, line) ) {
		std::istringstream iss(line);

		if ( !(iss >> cal) ) {
			if ( elf_cal > max_cal ) { max_cal = elf_cal; }
			elf_cal = 0;
		} else {
			elf_cal += cal;
		}
	}
	std::cout << max_cal << std::endl;
      	return EXIT_SUCCESS;
} 
