#include "Harl.hpp"

int getLogLevel(std::string level)
{
	int logLevel = -1;

	if (level == "DEBUG") {
		logLevel = 0;
	} else if (level == "INFO") {
		logLevel = 1;
	} else if (level == "WARNING") {
		logLevel = 2;
	} else if (level == "ERROR") {
		logLevel = 3;
	}
	return (logLevel);
}

int main(int ac, char **av)
{
	int logLevel = 0;

	if (ac > 2)
	{
		std::cout << "Invalid Args\n";
		return 1;
	}

	switch (ac) {
		case 1:
			logLevel = 0;
			break;
		case 2:
			logLevel = getLogLevel(std::string(av[1]));
			break;
	}
	
	Harl harl;


	if (logLevel == -1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return 0;
	}

	harl.setLogLevel(logLevel);
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
}
