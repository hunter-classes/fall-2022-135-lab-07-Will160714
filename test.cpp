#include <iostream>
#include <string>
#include "funcs.h"

int main(){
    std::string line = "";
    while(std::getline(std::cin, line)){
        line = removeLeadingSpaces(line);
        std::cout << line << std::endl;
    }
    
    return 0;
}