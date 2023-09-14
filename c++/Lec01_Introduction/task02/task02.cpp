// ################################################### Task #2 description ###################################################
// # maximum number between three values
// ###########################################################################################################################

#include <algorithm>
#include <iostream>

int main (){
    int num1 = 0, num2 = 0, num3 = 0;
    std::cout<< "Enter three numbers" << std::endl;
    std:: cin >> num1 >> num2 >> num3;
    int res = std::max(std::max(num1, num2),std::max(num1, num3));
    std::cout<< "The maximum value is:: " << res<<std::endl;
    return 0;
}