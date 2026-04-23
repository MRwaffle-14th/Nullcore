#include <unistd.h>
#include <stdio.h>

int main()
{
    char hostname[32];
    gethostname(hostname, sizeof(hostname));

    printf("%s\n", hostname);

    return 0;
}
