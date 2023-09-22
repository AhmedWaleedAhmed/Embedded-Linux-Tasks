// ################################################### Task #7 description ###################################################
// # fill array from 10 to 10000 sequentially
// # ref: https://en.cppreference.com/w/cpp/algorithm/iota
// ###########################################################################################################################


#include <iostream>
#include <numeric>

int main(){
    int arr [10000]= {0};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::iota(arr+9, arr + size, 10);
    for (auto i : arr){
        std::cout << i << " ";
    }
    return 0;
}