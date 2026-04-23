#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a symlink to use this command.\n");
        return 1;
    }

    ssize_t len;
    char buf[4096];

    len = syscall(SYS_readlink, argv[1], buf, sizeof(buf) - 1);

    buf[len] = '\0';
    printf("%s\n", buf);

    return 0;
}
