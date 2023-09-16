// ################################################### Task #6 description ###################################################
// # Write a lambda function to calculate the square of a given number.
// ###########################################################################################################################

#include <cstddef>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <ostream>

int main()
{
    int number = 0;
    std::cout << "Enter the number :: " << std::endl;
    std::cin >> number;
    auto fn = [](int num)-> int{
        return num*num;
    };
    std::cout << "The square of " << number << " is equal to :: " << fn(number) <<std::endl;
    return 0;
}
