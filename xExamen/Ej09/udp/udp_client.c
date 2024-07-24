#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 12345
#define BUFFER_SIZE 1024

int main() {
    int sockfd;
    char buffer[BUFFER_SIZE];
    struct sockaddr_in server_addr;
    socklen_t server_addr_len = sizeof(server_addr);

    // Crear socket UDP
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Configurar la dirección del servidor
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    server_addr.sin_port = htons(PORT);

    // Enviar datos
    const char *message = "Hello from client";
    sendto(sockfd, message, strlen(message), 0, (struct sockaddr *)&server_addr, server_addr_len);

    // Recibir respuesta
    int n = recvfrom(sockfd, (char *)buffer, BUFFER_SIZE, 0, (struct sockaddr *)&server_addr, &server_addr_len);
    buffer[n] = '\0';
    printf("Server: %s\n", buffer);

    // Cerrar socket
    close(sockfd);
    return 0;
}
