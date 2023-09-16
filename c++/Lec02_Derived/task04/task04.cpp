// ################################################### Task #4 description ###################################################
// # merge two arrays together
// ###########################################################################################################################

#include <cstddef>
#include <iostream>
#include <limits.h>
#include <ostream>
void merge_two_arrays(int arr1 [], int size1, int arr2 [], int size2, int arr3[]);
int main()
{
    int size1 = 0, size2 = 0;
    int arr1[50], arr2[50], arr3[100];
    std::cout << "Enter the size of the first array :: " << std::endl;
    std::cin >> size1;
    std::cout << "Enter the elements of the first array :: " << std::endl;
    for (int i =0; i<size1; i++){
        std::cin >> arr1[i];
    }
    std::cout << "Enter the size of the second array :: " << std::endl;
    std::cin >> size2;
    std::cout << "Enter the elements of the second array :: " << std::endl;
    for (int i =0; i<size2; i++){
        std::cin >> arr2[i];
    }
    merge_two_arrays(arr1,size1,arr2, size2, arr3);
    int size = size1+size2;
    std::cout << "The merged array :: " << std::endl;
    for (int i =0; i<size; i++){
        std::cout << arr3[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
void merge_two_arrays(int arr1 [], int size1, int arr2 [], int size2, int arr3[]){
    int idx = 0;
    for (int i =0; i<size1; i++){
        arr3[idx] = arr1[i];
        idx++;
    }
    for (int i =0; i<size2; i++){
        arr3[idx] = arr2[i];
        idx++;
    }
}