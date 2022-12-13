#include <iostream>

class GreetingHandling
{
public:
    GreetingHandling()
    {
        Greeting("Hello", "world");
    }

    GreetingHandling(std::string word1, std::string word2)
    {
        Greeting object1 (word1, word2);
    }

    class Greeting {
        std::string m_word1;
        std::string m_word2;
        
    public:
        Greeting(std::string word1, std::string word2): m_word1(word1), m_word2(word2)
        {
            std::cout << m_word1;
        }

        ~Greeting()
        {
            Handling tmp(',','!');
            std::cout << m_word2;
        }
    };

    class Handling
    {
        char m_coma;
        char m_exclamation;
        
    public:
        Handling(char coma, char exclamation): m_coma(coma), m_exclamation(exclamation)
        {
            std::cout << m_coma;
        }
        
        ~Handling()
        {
            std::cout << m_exclamation;
        }
    };
};

int main()
{
    GreetingHandling gh1("Kanzi", "C++");
    std::cout << "\n~~~~~~~~~~~~~~~~~~\n";
    GreetingHandling gh2;
    std::cout << "\n~~~~~~~~~~~~~~~~~~\n";
    gh2 = GreetingHandling(std::string("Bye-bye"), std::string("everyone"));
}

