#include <iterator>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
void output (std::vector<char> encr){
	std::copy(std::begin(encr), std::end(encr), std::ostream_iterator<char>(std::cout));
	std::cout << std::endl;
}

std::vector<char> input(){
	std::string line;
	std::vector<char> user_input;
	if(std::getline(std::cin, line)){

		std::istringstream iss(line);
		std::copy(std::istream_iterator<char>(iss),
    		 std::istream_iterator<char>(),
   		 std::back_inserter(user_input));
	}
	return user_input;
}
