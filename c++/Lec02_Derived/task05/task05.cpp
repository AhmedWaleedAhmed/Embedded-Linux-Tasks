// ################################################### Task #5 description ###################################################
// # ﬁnd the even and odd numbers in the array
// ###########################################################################################################################

#include <cstddef>
#include <iostream>
#include <limits.h>
#include <ostream>
void find_even_odd(int arr [], int size, int even [], int odd[], int *even_size, int *odd_size);
int main()
{
    int size = 0, even_size = 0, odd_size = 0;
    int arr[50], even[50], odd[50];
    std::cout << "Enter the size of the array :: " << std::endl;
    std::cin >> size;
    std::cout << "Enter the elements of the array :: " << std::endl;
    for (int i =0; i<size; i++){
        std::cin >> arr[i];
    }
    find_even_odd(arr,size,even, odd, &even_size, &odd_size);
    std::cout << "The even values :: " << std::endl;
    for (int i =0; i<even_size; i++){
        std::cout << even[i] << " ";
    }
    std::cout << "\n";
    std::cout << "The odd values :: " << std::endl;
    for (int i =0; i<odd_size; i++){
        std::cout << odd[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
void find_even_odd(int arr [], int size, int even [], int odd[], int *even_size, int *odd_size){
    int even_indx = 0;
    int odd_indx = 0;
    for (int i =0; i< size; i++){
        if (arr[i] % 2 == 0){
            even[even_indx] = arr[i];
            even_indx++;
        }else
        {
            odd[odd_indx] = arr[i];
            odd_indx++;
        }
    }
    *even_size = even_indx;
    *odd_size = odd_indx;
}