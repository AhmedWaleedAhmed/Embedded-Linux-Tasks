#include "executor.hpp"
#include <cstring>

executor::executor(){
    commands_db["firefox\n"] = "firefox &";
    commands_db["vscode\n"] = "code";
    commands_db["calculator\n"] = "gnome-calculator &";
    commands_db["calendar\n"] = "gnome-calendar &";
    commands_db["emojis\n"] = "gnome-characters &";
    commands_db["text_editor\n"] = "gnome-text-editor";
    commands_db["todo\n"] = "gnome-todo &";
    commands_db["terminal\n"] = "gnome-terminal";
    commands_db["ip\n"] = "ifconfig | grep 'inet ' | tail -n 1 | awk '{print $2}'";
    commands_db["exit\n"] = "exit";
}

executor::~executor(){}

int executor::execute(const char * buffer){
    FILE* pipe = popen(commands_db[buffer].c_str(), "r");
    if (pipe == nullptr) {
        std::cerr << "Failed to open pipe." << std::endl;
        return 1;
    }
    pclose(pipe);
    return 0;
}

int executor::execute_with_return(const char * buffer, int client_socket){
    FILE* pipe = popen(commands_db[buffer].c_str(), "r");
    if (!pipe) {
        std::cerr << "Error executing command." << std::endl;
        return 1;
    }
    char ip [128];
    std::string result = "";
    while (fgets(ip, sizeof(ip), pipe) != nullptr) {
        result += ip;
    }
    pclose(pipe);
    send(client_socket, result.c_str(), strlen(result.c_str()), 0);
    return 0;
}

void executor::show_commands_db(int client_socket){
    int indx = 0;
    char  buffer [1024];
    for (auto itr : commands_db)
    {
        memset(buffer, 0, sizeof(buffer));
        std::strcpy(buffer, (std::to_string(indx++)+"- "+itr.first).c_str());
        send(client_socket, buffer, strlen(buffer), 0);
    }
}

bool executor::check_command(const char * buffer){
    return (commands_db.find(buffer) != commands_db.end()) ? true : false;
}