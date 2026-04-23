#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("/proc/uptime", "r");
    char buffer[32];

    fgets(buffer, sizeof(buffer), file);

    double uptime = strtod(buffer, NULL);
    uptime /= 60;

    fclose(file);
    printf("Uptime: %f minutes\n", uptime);

    return 0;
}
