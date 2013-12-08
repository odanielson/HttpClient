
#include <stdlib.h>

#include "SimpleHttp.h"

static int httpGet(char *a_url, char *a_buffer, size_t a_bufferSize)
{
    return 200;
}

const struct SimpleHttp g_simpleHttp = {
    .httpGet = httpGet,
};
