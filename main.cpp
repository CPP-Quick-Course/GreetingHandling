#include "classes.h"

int main(){
    GreetingHandling gh1("Kanzi","C++");
    std::cout << "\n~~~~~~~~~~~~~~~~~~\n";
    GreetingHandling gh2;
    std::cout << "\n~~~~~~~~~~~~~~~~~~\n";
    gh2 = GreetingHandling(std::string("Bye-bye"), std::string("everyone"));
    std::cout << "\n~~~~~~~~~~~~~~~~~~\n";
    GreetingHandling gh3;
    std::cout << "\n~~~~~~~~~~~~~~~~~~\n";
    GreetingHandling gh4("Think","this is correct");
    return 0;
}