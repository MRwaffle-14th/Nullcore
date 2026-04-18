#include <stdio.h>
#include <unistd.h>

int main()
{
    char *name = ttyname(0);
    printf("%s\n", name);

    return 0;
}
