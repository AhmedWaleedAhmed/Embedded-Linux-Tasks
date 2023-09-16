// ################################################### Task #1 description ###################################################
// # create a function to ﬁnd the maximum number of array
// ###########################################################################################################################

#include <cstddef>
#include <iostream>
#include <limits.h>
#include <ostream>
int max_number_array(int arr [], int size);
int main()
{
    int size = 0;
    int arr [50];
    std::cout << "Enter the sizze of the array :: " << std::endl;
    std::cin >> size;
    for (int i =0; i<size; i++){
        std::cin >> arr[i];
    }
    std::cout << "Maximum Number in the array is :: " << max_number_array(arr, size) << std::endl;
    return 0;
}
int max_number_array(int arr [], int size){
    int max_number = INT_MIN;
    for (int i=0; i<size; i++){
        max_number = (arr[i] > max_number)? arr[i]:max_number;
    }
    return max_number;
}