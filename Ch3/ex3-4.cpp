#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	std::string word;
	std::string::size_type wordSize;
	std::cin >> word;
	std::string::size_type minSize = word.size();
	std::string::size_type maxSize = minSize;
	while (std::cin >> word) {
		wordSize = word.size();
		if (wordSize > maxSize) maxSize = wordSize;
		if (wordSize < minSize) minSize = wordSize;
	}

	std::cout << "Min size = " << minSize << ".\n"
			  "Max size = " << maxSize << "." << std::endl;

	return 0;
}