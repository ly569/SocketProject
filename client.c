/*************************************************************************
	> File Name: client.c
	> Author: 
	> Mail: 
	> Created Time: Sat 28 Mar 2020 02:34:37 PM CST
 ************************************************************************/

#include "head.h"

int socket_connect(char *host, int port) {
    int sockfd;
    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_port = htons(port);
    server.sin_addr.s_add = 
}
