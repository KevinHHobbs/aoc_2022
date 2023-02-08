#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <regex>
#include <string>

int main(int argc, char * argv[]) {
    std::ifstream input_file;
    input_file.open( argv[1] );
    std::string line;
    while ( std::getline(input_file, line) ) {
    }

    return EXIT_SUCCESS;
} 
