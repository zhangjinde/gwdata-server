#ifndef GW_H__
#define GW_H__

#include <stdint.h>
#include <time.h>

#include "ae.h"
#include "anet.h"
#include "adlist.h"
#include "sdlist.h"

struct gwdata_server{
        int json_fd;
        int json_port;
        
        int p208_fd;
        int p208_port;

        aeEventLoop *el;

        list *json_clients;
        list *p208_clients;
        list *seriports;

        int tcpkeepalive;
        uint64_t json_next_client_id;
        uint64_t p208_next_client_id;
        char  json_neterr[256];
        char  p208_neterr[256];


        list *global_sensor_data;

};

extern struct gwdata_server server;


#endif
