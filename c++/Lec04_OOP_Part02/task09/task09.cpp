// ################################################### Task #9 description ###################################################
// # calculate accumulate of array
// # ref: https://cplusplus.com/reference/numeric/accumulate/
// ###########################################################################################################################

#include <iostream>
#include<numeric>

int main() {
  int arr[] = {2, 4, 6, 8};
  int size = 4;
  int sum = 0;

  sum = std::accumulate(arr, arr+size, sum);

  std::cout << "The sum of the elements in the array: " << sum << std::endl;
  return 0;
}