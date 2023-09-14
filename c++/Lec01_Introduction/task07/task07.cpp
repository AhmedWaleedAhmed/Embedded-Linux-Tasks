// ################################################### Task #7   description ###################################################
// # change from decimal to binary and vice versa
// ###########################################################################################################################


#include <bitset>
#include <iostream>
#include <string>
 
 
int main()
{
    int number = 0;
    std::string binary = "";
    std::cout << "Enter the number to convert it to binary :: " << std::endl;
    std::cin >> number;
    std::bitset<8> decimalBitset(number);
    std::cout << "The binary format :: " << decimalBitset << std::endl;
    std::cout << "Enter the binary to convert it to number :: " << std::endl;
    std::cin >> binary;
    std::bitset<8> bitsetDecimal(binary);
    std::cout << "The decimal format :: " << bitsetDecimal.to_ulong() << std::endl; 
    return 0;
}
