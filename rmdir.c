#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a file name to use this command.\n");
        return 1;
    }

    char *dir = argv[1];

    if (dir == NULL)
    {
        printf("file does not exist.");
        return 1;
    }

    rmdir(dir);

    return 0;
}
