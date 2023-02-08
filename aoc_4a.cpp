#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char * argv[]) {
    std::ifstream input_file;
    input_file.open( argv[1] );
    std::string line;
    size_t count = 0;
    while ( std::getline(input_file, line) ) {
        std::istringstream iss(line);
        
        size_t a1, a2, b1, b2;
        iss >> a1;
        iss.ignore(1, '-');
        iss >> a2;
        iss.ignore(1, ',');
        iss >> b1;
        iss.ignore(1, '-');
        iss >> b2;

        if ( (a1 <= b1 && b2 <= a2) || (b1 <= a1 && a2 <= b2)) { ++count; }
    }

    std::cout << count << std::endl;
    return EXIT_SUCCESS;
} 
