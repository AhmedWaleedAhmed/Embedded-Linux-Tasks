#include "LOG.hpp"

// ################################################### Task #2 description ###################################################
// # Create Class to handle Logs with diﬀerent Levels and store Msgs as well for dump and clear the buﬀer
// # LOG::Level(level::warn)<<” forget to close ﬁle “ ;
// # LOG::Dump();
// # LOG::Clear
// g++ -g -fno-elide-constructors -std=c++14 -O0 main.cpp LOG.cpp
// valgrind --leak-check=full --show-leak-kinds=all ./a.out
// ###########################################################################################################################


int main(){
    LOG::Level(level::INFO)<<"first info message";
    LOG::Level(level::WARN)<<"first warn message";
    LOG::Level(level::ERROR)<<"first error message";
    LOG::Level(level::ERROR)<<"second error message";
    LOG::Level(level::INFO)<<"second info message";
    LOG::Show();
    LOG::Clear();
    LOG::Dump();
    return 0;
}