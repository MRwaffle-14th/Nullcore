#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a file name to use this command.\n");
        return 1;
    }

    mkdir(argv[1], 0755);
}
