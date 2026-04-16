#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a file name to use this command.\n");
        return 1;
    }

    char *file = argv[1];

    if (file == NULL)
    {
        printf("file does not exist.");
        return 1;
    }

    unlink(file);

    return 0;
}
