#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <set>
#include <string>

int main(int argc, char * argv[]) {
	std::ifstream input_file;
	input_file.open( argv[1] );
	std::string line_a;
	std::string line_b;
	std::string line_c;
  size_t total = 0;
	while ( 
    std::getline(input_file, line_a) &&
    std::getline(input_file, line_b) &&
    std::getline(input_file, line_c)
  ) {
    std::set<char> A (line_a.begin(), line_a.end() );
    std::set<char> B (line_b.begin(), line_b.end() );
    std::set<char> C (line_c.begin(), line_c.end() );
    
    std::set<char> AiB;
    std::set_intersection(
      A.begin(), A.end(),
      B.begin(), B.end(),
      std::inserter(AiB, AiB.begin())
    );

    std::set<char> AiBiC;
    std::set_intersection(
      AiB.begin(), AiB.end(),
      C.begin(), C.end(),
      std::inserter(AiBiC, AiBiC.begin())
    );

    char intersection = *AiBiC.begin();
    if ( 'a' <= intersection && intersection <= 'z') { total +=  1 + intersection - 'a'; }
    if ( 'A' <= intersection && intersection <= 'Z') { total += 27 + intersection - 'A'; }
	}

  std::cout << total << std::endl;
  return EXIT_SUCCESS;
} 
