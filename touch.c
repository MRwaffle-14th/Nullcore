#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a file name to use this command.\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "w");

    return 0;
}
