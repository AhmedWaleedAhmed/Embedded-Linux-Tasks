// ################################################### Task #2 description ###################################################
// # check if all the array is even ?
// ###########################################################################################################################

#include <algorithm>
#include <iostream>
 
void even_or_not(int arr[], int len)
{
    std::all_of(arr, arr + len, [](int i) -> bool { return !(i % 2); }) ? std::cout << "All are even elements" << std::endl : std::cout << "All are not even elements" << std::endl;
}
 
int main()
{
    int arr[] = { 2, 4 , 6, 14};
    int len = sizeof(arr) / sizeof(arr[0]);
    even_or_not(arr, len);
    return 0;
}