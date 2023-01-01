#include <cstdlib>
#include <fstream>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>

int main(int argc, char * argv[]) {
	std::ifstream input_file;
	input_file.open( argv[1] );
	std::string line;
	//size_t max_cal = 0;
	std::priority_queue<size_t> cal_heap;
	size_t elf_cal = 0;
	while ( std::getline(input_file, line) ) {
		std::istringstream iss(line);
		size_t cal;
		if ( !(iss >> cal) ) {
			//if ( elf_cal > max_cal ) { max_cal = elf_cal; }
			cal_heap.push(elf_cal);
			elf_cal = 0;
		} else {
			elf_cal += cal;
		}
	}
	size_t first = cal_heap.top(); cal_heap.pop();
	size_t secnd = cal_heap.top(); cal_heap.pop();
	size_t third = cal_heap.top(); cal_heap.pop();
	std::cout << first + secnd + third << std::endl;
      	return EXIT_SUCCESS;
} 
