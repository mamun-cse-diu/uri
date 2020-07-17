#include <stdio.h>
int main()
{
    int t, l;
    char mm[10100];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s",mm);
        l = strlen(mm);
        printf("%.2lf\n", l*.01);
    }
    return 0;
}
