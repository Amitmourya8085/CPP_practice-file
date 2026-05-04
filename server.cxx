#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <cstring>

int main() {
    // 1. Create a socket (IPv4, TCP)
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == -1) {
        std::cerr << "Failed to create socket\n";
        return -1;
    }

    // 2. Bind the socket to an IP and Port
    sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY; // Listen on all interfaces
    address.sin_port = htons(8080);       // Host-to-network short

    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        std::cerr << "Bind failed\n";
        return -1;
    }

    // 3. Listen for incoming connections
    if (listen(server_fd, 3) < 0) {
        std::cerr << "Listen failed\n";
        return -1;
    }

    std::cout << "Server is listening on port 8080...\n";

    // 4. Accept a connection
    int addrlen = sizeof(address);
    int new_socket = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen);
    if (new_socket < 0) {
        std::cerr << "Accept failed\n";
        return -1;
    }

    // 5. Read and Send data
    char buffer[1024] = {0};
    read(new_socket, buffer, 1024);
    std::cout << "Message received: " << buffer << std::endl;

    const char* hello = "Hello from the C++ server!";
    send(new_socket, hello, strlen(hello), 0);
    std::cout << "Response sent\n";

    // 6. Close the sockets
    close(new_socket);
    close(server_fd);

    return 0;
}
