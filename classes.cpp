#include "classes.h"

Greeting::Greeting(const std::string& str1, const std::string& str2) : first(str1), second(str2) {
    std::cout << first;
}

Greeting::~Greeting() {
    std::cout << second;
}

Handling::Handling(const std::string& str1, const std::string& str2) {
    Greeting g {str1, str2};
    std::cout << ", ";
}

Handling::~Handling() {
    std::cout << "!";
}


GreetingHandling::GreetingHandling() {
    Handling h;
}

GreetingHandling::GreetingHandling(const std::string& str1, const std::string& str2) {
    Handling h{str1,str2};
}
