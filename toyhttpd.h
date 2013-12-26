#ifndef TOYHTTPD_H
#define TOYHTTPD_H


#define PORTNUM 8080
#define MAXEVENT 1000

#define SENDFILE_USED 1

#define HANDLE_ERROR(error_string) do{perror(error_string); exit(-1);}while(0);


int setNonblocking(int fd);
void create_and_bind(int port);

void accept_sock(conn_info *info);
void read_request(conn_info *info);
void write_response(conn_info *info);

void handle_request(struct epoll_event event);


#endif// TOYHTTPD_H