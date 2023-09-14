// ################################################### Task #3   description ###################################################
// # RIGHT angle triangle
// ###########################################################################################################################

#include <iostream>
#include <ostream>

int main (){
    int hight = 0;
    std::cout << "Enter the hight of the Right Angled Triangle" << std::endl;
    std::cin >> hight;

    for (int i = 1; i <= hight; i++){
        for (int j = 0; j < i; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}