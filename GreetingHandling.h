#pragma once
#include <iostream>

class GreetingHandling
{
	class Greeting {
		std::string m_word1;
		std::string m_word2;
	public:
		Greeting(std::string word1 = "Hello", std::string word2 = "World")
			: m_word1(word1)
			, m_word2(word2)
		{
			std::cout << m_word1;
		}

		~Greeting() {
			std::cout << m_word2;
		}
	};

	class Handling {
	public:
		Handling() {
			std::cout << ", ";
		}

		~Handling() {
			std::cout << "!";
		}
	};

public:
	GreetingHandling();
	GreetingHandling(const std::string& word1, const std::string& word2);
};