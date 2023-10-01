#include "LOG.hpp"

std::vector<std::pair<level, std::string>> LOG::buffer{};

std::pair<level, std::string>& LOG::Level(level l){
    LOG::buffer.push_back(std::make_pair(l, ""));
    return LOG::buffer.back();
}

void LOG::Show(){
    for (auto i : LOG::buffer){
        switch (static_cast<int>(i.first)) {
            case 0:
                std::cout << "log level :: INFO, message :: "<< i.second << std::endl;
            break;
            case 1:
                std::cout << "log level :: WARN, message :: "<< i.second << std::endl;
            break;
            case 2:
                std::cout << "log level :: ERROR, message :: "<< i.second << std::endl;
            break;
        }
    }
}

void LOG::Dump(){
    std::fstream my_file;
    my_file.open("my_file.txt", std::ios::out);
    if (!my_file) {
		std::cout << "File not created!";
	}else {
		std::cout << "File created successfully!";
        for (auto i : LOG::buffer){
            switch (static_cast<int>(i.first)) {
                case 0:
                    my_file << "log level :: INFO, message :: "<< i.second << std::endl;
                break;
                case 1:
                    my_file << "log level :: WARN, message :: "<< i.second << std::endl;
                break;
                case 2:
                    my_file << "log level :: ERROR, message :: "<< i.second << std::endl;
                break;
            }
        }
		my_file.close();
	}
}

void LOG::Clear()
{
    LOG::buffer.clear();
}
void operator<<(std::pair<level, std::string>& p, const std::string &s){
    p.second=s;
}