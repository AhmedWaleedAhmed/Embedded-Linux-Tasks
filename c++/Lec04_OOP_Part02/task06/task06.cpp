// ################################################### Task #6 description ###################################################
// # explain the following code
// ###########################################################################################################################

// f() will return a reference to the static variable which is still live in the memory so here we can access it outside the
// function and update it's value.
// first time it'll print zero but the value of x already updated to 10
// then it 'll print the 10 but update the x to 0

#include <iostream>
#include <signal.h>

int &f(){
    static int x=0;
    std::cout << x << std::endl;
    return x;
}

int main(){
    f()=10;
    f()=0;
    return 0;
}