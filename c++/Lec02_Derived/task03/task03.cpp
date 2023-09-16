// ################################################### Task #3 description ###################################################
// # delete number in array
// ###########################################################################################################################

#include <cstddef>
#include <iostream>
#include <limits.h>
#include <ostream>
bool delete_number_array(int arr [], int *size, int number);
int main()
{
    int size = 0, number = 0;
    int arr [50];
    std::cout << "Enter the size of the array :: " << std::endl;
    std::cin >> size;
    std::cout << "Enter the number to delete it :: " << std::endl;
    std::cin >> number;
    std::cout << "Enter the elements of the array :: " << std::endl;
    for (int i =0; i<size; i++){
        std::cin >> arr[i];
    }
    bool res = delete_number_array(arr, &size, number);
    if (res)
    {
        std::cout << "The array after deleting " << number << std::endl;
        for (int i =0; i<size; i++){
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }else
    {
        std::cout << "We didn't find the number in the array" << std::endl;
        for (int i =0; i<size; i++){
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
bool delete_number_array(int arr [], int *size, int number){
    bool res = false;
    for (int i=0; i<*size; i++){
        if (arr[i] == number){
            for (int j = i; j< (*size)-1; j++){
                arr[j] = arr[j+1];
            }
            res = true;
            (*size)--;
            i--;
        }
    }
    return res;
}