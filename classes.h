#pragma once
#include <iostream>
#include <string>

class Greeting {
public:
    Greeting(const std::string& str1, const std::string& str2);
    ~Greeting();
private:
    std::string first;
    std::string second;
};

class Handling {
public:
    Handling(const std::string& str1  = "Hello", const std::string& str2 = "World");
    ~Handling();
};

class GreetingHandling {
public:
    GreetingHandling();
    GreetingHandling(const std::string& str1, const std::string& str2);
};