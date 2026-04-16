#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a file name to use this command.\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    struct stat st;
    int fd = fileno(file);

    if (fstat(fd, &st) == 0)
    {
        printf("Size: %ld bytes\n", st.st_size);
        printf("Inode: %ld\n", st.st_ino);
    } else {
        perror("stat");
        return 1;
    }

    return 0;
}
