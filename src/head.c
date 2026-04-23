#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("you must provide a file name and the number of lines to read to use this command.\n");
        return 1;
    }

    char *fileName = argv[1];
    FILE *file = fopen(fileName, "r");
    unsigned int lines = (unsigned int)strtoul(argv[2], NULL, 10);

    if (file == NULL)
    {
        printf("file does not exist.\n");
        return 1;
    }

    char buffer[256];

    unsigned int counter = 0;
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        if (counter >= lines) break;

        printf("%s", buffer);
        counter++;
    }

    fclose(file);
    return 0;
}
