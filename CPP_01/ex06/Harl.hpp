#include <iostream>

class Harl {
	private:
		int logLevel;
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
		void setLogLevel(int toSet);
};
