#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int main()
{
    char buf[PATH_MAX];

    if (getcwd(buf, sizeof(buf)) == NULL) return 1;

    printf("%s\n", buf);
    return 0;
}
