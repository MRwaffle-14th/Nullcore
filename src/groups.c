#include <unistd.h>
#include <grp.h>
#include <stdio.h>

int main()
{
    gid_t groups[32];
    int n = getgroups(32, groups);

    for (int i = 0; i < n; i++)
    {
        struct group *g = getgrgid(groups[i]);

        if (g)
        {
            printf("%s, ", g->gr_name);
        } else {
            printf("%u, ", groups[i]);
        }
    }

    printf("\n");

    return 0;
}
