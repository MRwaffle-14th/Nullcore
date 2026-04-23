#include <pwd.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("you must provide a file name and a user to use this command.\n");
        return 1;
    }

    const char *file = argv[1];
    const char *user = argv[2];

    struct passwd *pw = getpwnam(user);
    chown(file, pw->pw_uid, pw->pw_gid);

    return 0;
}
