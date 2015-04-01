#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
	std::vector<std::string> words;
	std::string word;
	bool duplicate;
	while (std::cin >> word) {
		duplicate = false;
		for (std::vector<std::string>::size_type i = 0; i < words.size(); ++i) {
			if (words[i] == word) duplicate = true;
		}
		if (duplicate) {
			continue;
		} else { 
			words.push_back(word);
		}
	}
	std::cout << "Number of distinct words = " << words.size() << std::endl;
	return 0;
}