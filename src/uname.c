#include <sys/utsname.h>
#include <stdio.h>

int main()
{
    struct utsname u;

    uname(&u);

    printf("sysname:  %s\n", u.sysname);
    printf("nodename: %s\n", u.nodename);
    printf("release:  %s\n", u.release);
    printf("version:  %s\n", u.version);
    printf("machine:  %s\n", u.machine);

    return 0;
}
