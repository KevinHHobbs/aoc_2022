#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <regex>
#include <string>
#include <vector>


typedef std::stack  <char>           CargoStackType;
typedef std::vector <CargoStackType> CargoArrangementType;

CargoArrangementType read_cargo_arrangement(
        std::ifstream &input_file,
        std::string  &line,
        CargoArrangementType &cargo_arrangement
        ) {
    if (line.empty()) {
        return cargo_arrangement; // should read next section
    }

    while ( std::getline(input_file, line) ) {
    }
    return cargo_arrangement;
}


int main(int argc, char * argv[]) {

    std::ifstream input_file;
    input_file.open( argv[1] );
    std::string line;

    return EXIT_SUCCESS;
} 
