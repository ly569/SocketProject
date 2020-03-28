/*************************************************************************
	> File Name: client.c
	> Author: 
	> Mail: 
	> Created Time: Sat 28 Mar 2020 02:52:07 PM CST
 ************************************************************************/

#include "head.h"
#include "tcp_client.h"

int main(int argc, char **argv) {
    int sockfd;
    if (argc != 3) {
        fprintf(stderr, "Usage: %s ip port\n", argv[0]);
        return 1;
    }
    if ((sockfd = socket_connect(argv[1], atoi(argv[2]))) < 0) {

    }
}
