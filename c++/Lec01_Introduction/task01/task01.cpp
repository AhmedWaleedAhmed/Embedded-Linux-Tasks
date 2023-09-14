// ################################################### Task #1 description ###################################################
// # Create a table for AscII code
// # for more fancy work you can take a look at https://www.sanfoundry.com/cpp-program-print-ascii-table/
// ###########################################################################################################################

#include <algorithm>
#include <cmath>
#include <iomanip> 
#include <iostream>
#include <ostream>
int main()
{
    unsigned char i = 0;

    std::cout<<"ASCII Code Table:"<<std::endl;
    for (int x = 0; x<2; x++){
        std::cout << '+';
        for (int j =1; j<=8;j++)
        {       
            std::cout << '-';
        }
    }
    std::cout << '+';
    std::cout << std::endl;
    std::cout << '|' << "  Char  " << '|' << "  ASCII " << '|' << std::endl;
    for (int x = 0; x<2; x++){
        std::cout << '+';
        for (int j =1; j<=8;j++)
        {       
            std::cout << '-';
        }
    }
    std::cout << '+';
    std::cout << std::endl;
    for (i = 0; i< static_cast<int>(pow(2, (sizeof(i)*8))/2); i++ ){
        if (i < 32){
            std::cout << '|' << std::setw(8) << static_cast<int>(i) << '|' << std::setw(8) << std::setfill(' ') << '|' << std::endl;
        }
        else if (i >= 32 && i < 127){
            std::cout << '|' << std::setw(8) << static_cast<int>(i) << '|' << std::setw(7) << i << '|' << std::endl;
        }else
        {
            std::cout << '|' << std::setw(8) << static_cast<int>(i) << '|' << std::setw(7) << "DEL" << '|' << std::endl;
        }
    }   
    return 0;
}