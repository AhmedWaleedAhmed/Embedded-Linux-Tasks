#ifndef __LOG__
#define __LOG__

#include <string>
#include <iostream>
#include <utility>
#include <vector>
#include <fstream>

enum class level {
    INFO,
    WARN,
    ERROR
};

class LOG{
    public:
        LOG()=delete;
        static std::pair<level, std::string>& Level(level l);
        static void Dump();
        static void Show();
        static void Clear();
    private:
        static std::vector<std::pair<level, std::string>> buffer;
};

void operator<<(std::pair<level, std::string>& p, const std::string &s);

#endif // !__LOG__