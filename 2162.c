#include <stdio.h>

int main()
{
    int n, i, m = 1;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);
    if(n==2 && ara[0]==ara[1])
        m = 0;
    else
    {
        for(i=2; i<n; i++)
        {
            if(ara[i] >= ara[i-1] && ara[i-1] >= ara[i-2])
            {
                m = 0;
                break;
            }
            else if(ara[i] <= ara[i-1] && ara[i-1] <= ara[i-2])
            {
                m = 0;
                break;
            }
        }
    }
    printf((m==1)?"1\n":"0\n");
    return 0;
}
