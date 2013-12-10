
#include <stdlib.h>
#include <stdio.h>

#include "SimpleHttp.h"

static int httpGet(char *a_url, char *a_buffer, size_t a_bufferSize)
{
    TcpHandle *handle =

    printf("hej");
    return 200;
}

const struct SimpleHttp g_simpleHttp = {
    .httpGet = httpGet,
};
