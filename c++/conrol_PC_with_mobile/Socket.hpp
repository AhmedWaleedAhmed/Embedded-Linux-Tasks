#ifndef __Socket__
#define __Socket__
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>

class Socket{
    private:
        // a struct that will be holding the IP, port.
        sockaddr_in server_address, client_address;
        socklen_t client_length;
    public:
        // server socket descriptor, and client socket descriptor.
        int server_socket, client_socket;

        Socket();
        ~Socket();
};

#endif // !__Socket__
