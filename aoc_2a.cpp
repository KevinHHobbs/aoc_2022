#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char * argv[]) {
	std::ifstream input_file;
	input_file.open( argv[1] );
	std::string line;
	size_t total_score = 0;
	while ( std::getline(input_file, line) ) {
		char opponent_plays = line[0];
		char my_play = line[2];
		// Score for my play
		if ( my_play == 'X' ) { total_score += 1; }
		if ( my_play == 'Y' ) { total_score += 2; }
		if ( my_play == 'Z' ) { total_score += 3; }

		// Score for outcome
		if ( my_play == 'X' && opponent_plays == 'A' ) { total_score += 3; }
		if ( my_play == 'X' && opponent_plays == 'B' ) { total_score += 0; }
		if ( my_play == 'X' && opponent_plays == 'C' ) { total_score += 6; }

		if ( my_play == 'Y' && opponent_plays == 'A' ) { total_score += 6; }
		if ( my_play == 'Y' && opponent_plays == 'B' ) { total_score += 3; }
		if ( my_play == 'Y' && opponent_plays == 'C' ) { total_score += 0; }

		if ( my_play == 'Z' && opponent_plays == 'A' ) { total_score += 0; }
		if ( my_play == 'Z' && opponent_plays == 'B' ) { total_score += 6; }
		if ( my_play == 'Z' && opponent_plays == 'C' ) { total_score += 3; }
	}

	std::cout << total_score << std::endl;

      	return EXIT_SUCCESS;
} 
