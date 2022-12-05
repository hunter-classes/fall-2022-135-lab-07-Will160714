#include <iostream>
#include <string>
#include "funcs.h"

int main(){
    std::cout << "Dev Branch" << std::endl;
    std::cout << "Task A" << std::endl;
    std::cout << "removeLeadingSpaces('       int x = 1;  '): " << removeLeadingSpaces("       int x = 1;  ") << std::endl;
    std::cout << std::endl;
    std::cout << "Task B" << std::endl;
    std::cout << "coutChar('for(int i = 0; i < 10; i++){', '{'): " << countChar("for(int i = 0; i < 10; i++){", '{') << std::endl;

    return 0;
}
