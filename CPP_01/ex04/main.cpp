#include <fstream>
#include <iostream>

std::string readline(std::ifstream& file) {
	std::string line;
	char c;
	while (file.get(c)) {
		line += c;
		if (c == '\n') {
			return (line);
		}
	}
	return (line);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid args count\n";
		return (1);
	}

	std::string filename = std::string(av[1]);
	std::string s1 = std::string(av[2]);
	std::string s2 = std::string(av[3]);

	std::ifstream openedInFile(filename.c_str());
	if (!openedInFile)
	{
		std::cout << "Error opening the infile\n";
		return (1);
	}

	std::ofstream openedOutFile((filename + ".replace").c_str());
	if (!openedOutFile)
	{
		std::cout << "Error opening the outfile\n";
		return (1);
	}

	std::string lineRead;
	while (!(lineRead = readline(openedInFile)).empty()) {
		size_t currPos = 0;
		size_t foundAt;
		std::string res = "";
		while ((foundAt = lineRead.find(s1, currPos)) != std::string::npos) {
			res += lineRead.substr(currPos, (foundAt - currPos));
			res += s2;
			currPos = foundAt + s1.length();
		}
		res += lineRead.substr(currPos);
		openedOutFile << res;
	}
	return (0);
}
