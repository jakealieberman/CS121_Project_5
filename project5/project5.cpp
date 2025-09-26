#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

// main function
int main() {
	std::ifstream infile("input.txt"); // open file
	std::string line;
	while (std::getline(infile, line)) { // read each line
		std::stringstream ss(line);
		std::string str1, str2, text;

		std::getline(ss, str1, ' ');
		std::getline(ss, str2, ' ');
		std::getline(ss, text);

		int num1 = std::stoi(str1); // convert to integers
		int num2 = std::stoi(str2);

		int sum = num1 + num2; // add and print
	    for (int i = 0; i < sum; ++i) {
			std::cout << text << " ";
		}
		std::cout << std::endl;
	}
	return 0;
} // end main