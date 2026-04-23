#include <grp.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("you must provide a file name and a group to use this command.\n");
        return 1;
    }

    const char *file = argv[1];
    const char *group = argv[2];

    struct group *gr = getgrnam(group);
    chown(file, -1, gr->gr_gid);

    return 0;
}
