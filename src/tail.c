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

    unsigned int fileLines = 0;
    char buf[4096];

    size_t n;

    while ((n = fread(buf, 1, sizeof(buf), file)) > 0)
    {
        for (size_t i = 0; i < n; i++)
        {
            if (buf[i] == '\n')
                fileLines++;
        }
    }

    unsigned int currentLine = 0;
    rewind(file);
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        if (currentLine >= fileLines-lines) { printf("%s", buffer);; }

        currentLine++;
    }

    fclose(file);
    return 0;
}
