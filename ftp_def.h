#ifndef FTP_DEF_H
#define FTP_DEF_H

#include <netinet/in.h>

struct ftp_state {
    int last_cmd;
    int loggedin;
    struct sockaddr_in port_addr;
    const char* msg_ready;
    const char* msg_ok;
    void* arg;
};

#endif
