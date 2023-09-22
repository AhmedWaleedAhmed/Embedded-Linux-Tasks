// ################################################### Task #10 description ###################################################
// # Create A class that can be use to make backtrace for calling functions
// # ref: https://www.techiedelight.com/find-name-of-the-calling-function-in-cpp/
// ###########################################################################################################################

#include "backtrace.hpp"
#include "header.hpp"

void fun1(int x);
void fun2(int x);
void fun3(int x);

int main() {
    EnterFn;
    fun1(3);
    ExitFn;
}

void fun1(int x){
    EnterFn;
    fun2(3);
    ExitFn;
}
void fun2(int x){
    EnterFn;
    fun3(3);
    ExitFn;
}
void fun3(int x){
    EnterFn;

    PRINT_BT;

    ExitFn;
}