
#include <stdio.h>

#include "SimpleHttp.h"

int main(int argc, char **argv) {
    char buffer[256];
    int status;

    status = g_simpleHttp.httpGet("hej", buffer, sizeof(buffer));
    printf("status=%d\n", status);
    return 0;
}
