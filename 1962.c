#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int year;
        scanf("%d", &year);
        if(year<2015)
        {
            printf("%d D.C.\n", 2015-year);
        }
        else
        {
            printf("%d A.C.\n", year-2014);
        }
    }
    return 0;
}
