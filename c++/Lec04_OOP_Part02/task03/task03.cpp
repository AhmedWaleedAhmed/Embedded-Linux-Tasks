// ################################################### Task #3 description ###################################################
// # check if there is any value of array is even ?
// ###########################################################################################################################


#include <algorithm>
#include <iostream>
 
void even_or_not(int arr[], int len)
{
    std::any_of(arr, arr + len, [](int i) -> bool { return !(i % 2); }) ? std::cout << "there is an even element in the array" << std::endl : std::cout << "there is no an even element in the array" << std::endl;
}
 
int main()
{
    int arr[] = { 17, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    even_or_not(arr, len);
    return 0;
}