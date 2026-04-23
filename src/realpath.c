#include <linux/limits.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a file name to use this command.\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    int fd = fileno(file);

    char linkpath[64];
    snprintf(linkpath, sizeof(linkpath), "/proc/self/fd/%d", fd);

    char path[PATH_MAX];
    ssize_t len = readlink(linkpath, path, sizeof(path) - 1);

    path[len] = '\0';  // critical

    printf("%s\n", path);

    fclose(file);

    return 0;
}
