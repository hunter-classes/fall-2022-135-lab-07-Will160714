#include "funcs.h"
#include <string>
#include <cctype>

std::string removeLeadingSpaces(std::string line){
    std::string result = "";
    int index;
    for(int x = 0; x < line.length(); x++){
        if(!(isspace(line[x]))){
            index = x;
            break;
        }
    }
    
    result = line.substr(index);

    return result;
}

int countChar(std::string line, char c){
    int count = 0;
    for(int x = 0; x < line.length(); x++){
        if(line[x] == c)
            count ++;
    }
    return count;
}