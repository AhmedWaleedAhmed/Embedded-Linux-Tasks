// ################################################### Task #1 description ###################################################
// # check if the character is digit ?
// ###########################################################################################################################

#include <cctype>
#include <iostream>
int main()
{
    char ch;
    std::cout << "Enter the character :: " << std::endl;
    std::cin >> ch;
    isdigit(ch)? std::cout << "it's a digit = " << ch << std::endl : std::cout << "it's not a digit" << std::endl;
    return 0;
}
