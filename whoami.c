#include <stdio.h>
#include <unistd.h>
#include <pwd.h>

int main()
{
    uid_t uid = geteuid();
    struct passwd *pw = getpwuid(uid);

    printf("%s\n", pw->pw_name);

    return 0;
}
