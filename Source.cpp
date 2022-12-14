#include "GreetingHandling.h"

int main() {
	GreetingHandling gh1("Kanzi", "C++");
	std::cout << "\n~~~~~~~~~~~~~~~~~~\n";
	GreetingHandling gh2;
	std::cout << "\n~~~~~~~~~~~~~~~~~~\n";
	gh2 = GreetingHandling(std::string("Bye-bye"), std::string("everyone"));

	return 0;
}