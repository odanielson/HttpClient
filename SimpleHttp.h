#ifndef SIMPLEHTTP_H
#define SIMPLEHTTP_H

#include <stdlib.h>

struct SimpleHttp {
    int (*httpGet)(char *a_url, char *a_buffer, size_t a_bufferSize);
};

const struct SimpleHttp g_simpleHttp;


#endif
