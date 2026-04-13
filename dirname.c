#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a file name or a location to use this command.\n");
        return 1;
    }

    char *str = argv[1];
    char *last = strrchr(str, '/');

    if (last == NULL)
    {
        printf(".\n");
    } else if (last == str)
    {
        printf("/\n");
    } else {
        *last = '\0';
        printf("%s\n", str);
    }

    return 0;
}
