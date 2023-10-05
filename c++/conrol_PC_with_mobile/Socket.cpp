#include "Socket.hpp"

Socket::Socket(){
    // create socket descriptor that will be working on IPv4 domain, TCP connection.
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // speccify the port and the IP for the server.
    server_address.sin_family = AF_INET;                     // IPv4 domain
    server_address.sin_port = htons(8080);        // Port number
    server_address.sin_addr.s_addr = INADDR_ANY;            // Bind to any local address

    // bind the socket to a specific IP address and port number.
    bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address));
    // listen for incoming connections.
    // Allows up to 5 pending connections
    listen(server_socket, 5);

    std::cout << "Server is listening on port 8080..." << std::endl;

    // Accept an incoming connection, This function blocks until a client connects to the server.
    client_length = sizeof(client_address);
    client_socket = accept(server_socket, (struct sockaddr *)&client_address, &client_length);
}

Socket::~Socket(){
    close(server_socket);
    close(client_socket);
}