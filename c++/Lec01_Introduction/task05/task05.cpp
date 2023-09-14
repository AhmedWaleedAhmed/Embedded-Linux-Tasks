// ################################################### Task #5   description ###################################################
// # multiplication table
// ###########################################################################################################################

#include <cstddef>
#include <iostream>
#include <ostream>


int main (){
    int number = 0;
    std::cout << "Enter the number" << std::endl;
    std::cin >> number;
    for (int i =0; i<=12; i++){
        std::cout << i << " * " << number << " = " << (i*number) << std::endl;
    }
    
    return 0;
}