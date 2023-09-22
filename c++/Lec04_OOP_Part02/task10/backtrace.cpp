#include "backtrace.hpp"

std::vector<std::string> back_trace;

void EnterFn(std::string fn_name){
    std::cout << "Enter to [" << fn_name << "]" << std::endl;
    back_trace.push_back(fn_name);
}
void ExitFn(std::string fn_name){
    std::cout << "Exit from [" << fn_name << "]" << std::endl;
}

void PRINT_BT(void){
    std::cout << "Backtrace as follows : " << std::endl;
    int counter = 0;
    for(auto i : back_trace){
        std::cout << counter << "- " << i << std::endl;
        counter++;
    }
}