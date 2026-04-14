#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <src> <dest>\n", argv[0]);
        return 1;
    }

    int src = open(argv[1], O_RDONLY);
    if (src < 0)
    {
        perror("open src");
        return 1;
    }

    int dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (dest < 0)
    {
        perror("open dest");
        close(src);
        return 1;
    }

    char buf[8192];
    ssize_t n;

    while ((n = read(src, buf, sizeof(buf))) > 0)
    {
        ssize_t written = write(dest, buf, n);
        if (written != n)
        {
            perror("write");
            close(src);
            close(dest);
            return 1;
        }
    }

    if (n < 0)
    {
        perror("read");
    }

    close(src);
    close(dest);

    unlink(argv[1]);

    return 0;
}
