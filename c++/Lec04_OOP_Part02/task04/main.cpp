#include "String.hpp"

// ################################################### Task #4 description ###################################################
// # Create Class behave like string totally
// g++ -g -fno-elide-constructors -std=c++14 main.cpp String.cpp
// tldr valgrind
// valgrind --leak-check=full --show-leak-kinds=all ./a.out
// ###########################################################################################################################

int main(){
    String s("ahmed");
    // String s2;
    // String s2(" Waleed");
    // String res;
    // res = s+s2;
    // res = s+" Waleed";
    // String s2("Waleed");
    // s2=std::move(s);
    // s.set1stChar('z');
    // res.print();
    // std::cout << s.length() << std::endl;
    // s.print();
    std::cout << s << std::endl;

    std::cin >> s;
    std::cout << s << std::endl;

    std::cout << s.length() << std::endl;
    return 0;
}