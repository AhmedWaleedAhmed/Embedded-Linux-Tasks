#include "executor.hpp"
#include "Socket.hpp"
#include <cstring>

int main() {
    executor executor;
    Socket Socket;
    char buffer[1024] = "Enter the command you want to execute from the following:: \n";
    int output = 0;
    send(Socket.client_socket, buffer, strlen(buffer), 0);
    executor.show_commands_db(Socket.client_socket);
    while (true) {
        memset(buffer, 0, sizeof(buffer));
        read(Socket.client_socket, buffer, sizeof(buffer));
        std::cout << "Received: " << buffer << std::endl;
        if (executor.check_command(buffer)) {
            if (std::strcmp(buffer, "exit\n") == 0){
                memset(buffer, 0, sizeof(buffer));
                strcpy(buffer,"Closing the socket!\n");
                send(Socket.client_socket, buffer, strlen(buffer), 0);
                std::cout << "Closing the socket" << std::endl;
                break;
            }else if (std::strcmp(buffer, "ip\n") == 0) {
                output = executor.execute_with_return(buffer, Socket.client_socket);
                memset(buffer, 0, sizeof(buffer));
                (output == 0) ? strcpy(buffer,"Command executed successfully!\n") : strcpy(buffer,"Something went wrong!\n");
                send(Socket.client_socket, buffer, strlen(buffer), 0);
                std::cout << "In execute with return" << std::endl;
            }
            else{
                output = executor.execute(buffer);
                memset(buffer, 0, sizeof(buffer));
                (output == 0) ? strcpy(buffer,"Command executed successfully!\n") : strcpy(buffer,"Something went wrong!\n");
                send(Socket.client_socket, buffer, strlen(buffer), 0);
                std::cout << "In normal execute" << std::endl;
            }
        } else {
            std::cout << "Command not found!" << std::endl;
            memset(buffer, 0, sizeof(buffer));
            strcpy(buffer,"Command not found!\n");
            send(Socket.client_socket, buffer, strlen(buffer), 0);
        }
    }

    
    return 0;
}