// ################################################### Task #4   description ###################################################
// # decide the letter is vowel or not
// ###########################################################################################################################

#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>

int main (){
    char ch = 0;
    std::string vowel = "aeiou";
    std::cout << "Enter the character" << std::endl;
    std::cin >> ch;
    ch = tolower(ch);
    if (vowel.find(ch) != std::string::npos){
        std::cout << "it's a vowel" << std::endl;
    }else
    {
        std::cout << "it's not a vowel" << std::endl;
    }
    return 0;
}