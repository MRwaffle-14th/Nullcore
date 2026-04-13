#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s <src> <dest>\n", argv[0]);
        return 1;
    }

    char *src = argv[1];
    char *dst = argv[2];

    link(src, dst);

    return 0;
}
