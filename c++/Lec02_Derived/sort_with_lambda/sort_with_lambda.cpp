// ################################################### Task #7 description ###################################################
// # Use lambda functions to sort an array of integers in ascending and descending order.
// ###########################################################################################################################

#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <limits.h>
#include <math.h>
#include <ostream>

int main()
{
    int size = 0;
    int arr [50];
    std::cout << "Enter the size :: " << std::endl;
    std::cin >> size;

    std::cout << "Enter the array values :: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::sort(std::begin(arr), &(arr[size]), [](int first, int second)-> bool{
        return first > second;
    });
    std::cout << "The array after descending sorting :: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout<<"\n";
    std::sort(std::begin(arr), &(arr[size]), [](int first, int second)-> bool{
        return first < second;
    });
    std::cout << "The array after ascending sorting :: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout<<"\n";
    return 0;
}
