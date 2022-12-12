#include <iostream>
#include <string>
#include "funcs.h"

//add tests in a txt file that then can be used with these funcs"

int main(){
    std::string line = "";
    int count = 0;
    while(std::getline(std::cin, line)){
        line = removeLeadingSpaces(line);
    
        if(countChar(line, '}') > 0){
            count --;
        }
        
        for(int x = 0; x < count; x++){
            line = "\t" + line;
        }

        std::cout << line << std::endl;
       
        if(countChar(line, '{') > 0){
            count ++;
        }

    }
    
    return 0;
}