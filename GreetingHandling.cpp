#include "GreetingHandling.h"

GreetingHandling::GreetingHandling() {
	Greeting g;
	Handling h;

	g.~Greeting();
};

GreetingHandling::GreetingHandling(const std::string& word1, const std::string& word2) {
	Greeting g(word1, word2);
	Handling h;

	g.~Greeting();
};