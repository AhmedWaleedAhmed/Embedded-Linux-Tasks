// ################################################### Task #2 description ###################################################
// # create a function to search to the number in the array which number is taken from user
// ###########################################################################################################################

#include <cstddef>
#include <iostream>
#include <limits.h>
#include <ostream>
bool number_inside_array(int arr [], int size, int number);
int main()
{
    int size = 0, number = 0;
    int arr [50];
    std::cout << "Enter the size of the array :: " << std::endl;
    std::cin >> size;
    std::cout << "Enter the number to search for :: " << std::endl;
    std::cin >> number;
    std::cout << "Enter the elements of the array :: " << std::endl;
    for (int i =0; i<size; i++){
        std::cin >> arr[i];
    }
    std::cout << (number_inside_array(arr, size, number)? "The number inside the array" : "The number outside the array") << std::endl;
    return 0;
}
bool number_inside_array(int arr [], int size, int number){
    bool res = false;
    for (int i=0; i<size; i++){
        if (arr[i] == number){
            res = true;
            break;
        }
    }
    return res;
}