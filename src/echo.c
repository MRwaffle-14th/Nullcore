#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a file name to use this command.\n");
        return 1;
    }

    char *str = argv[1];
    int len = strlen(str);

    write(1, str, len);
    write(1, "\n", 1);

    return 0;
}
