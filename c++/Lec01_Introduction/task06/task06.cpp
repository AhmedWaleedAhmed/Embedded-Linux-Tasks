// ################################################### Task #6   description ###################################################
// # summation the digits of integer entered by user
// ###########################################################################################################################

#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>


int main (){
    int number = 0;
    int res = 0;
    std::cout << "Enter the number" << std::endl;
    std::cin >> number;
    while (number > 0){
        res+=(number%10);
        number/=10;
    }
    
    std::cout << "The resutl = " << res << std::endl;
    
    return 0;
}
