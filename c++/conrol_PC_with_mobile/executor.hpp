#ifndef __executor__
#define __executor__
#include <iostream>
#include <cstring>
#include <map>
#include <sys/socket.h>
#include <unistd.h>

class executor{
    private:
        std::map<std::string, std::string> commands_db;
    public:
        executor();
        ~executor();

        int execute(const char * buffer);
        int execute_with_return(const char * buffer, int client_socket);
        void show_commands_db(int client_socket);
        bool check_command(const char * buffer);
};

#endif // !__executor__