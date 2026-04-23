#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("usage: sleep_ns <nanoseconds>\n");
        return 1;
    }

    unsigned long long ms = strtoull(argv[1], NULL, 10);

    struct timespec req;

    req.tv_sec = ms / 1000;
    req.tv_nsec = (ms % 1000) * 1000000L;

    nanosleep(&req, NULL);

    return 0;
}
