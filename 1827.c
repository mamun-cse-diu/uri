#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int ara[n][n];
        int a,aa,b,c,d,e,f,g,x,y;
        for(a=0; a<n; a++)
        {
            for(b=0; b<n; b++)
                ara[a][b]=0;
        }
        for(a=0; a<n; a++)
            ara[a][a]=2;
        d=n-1;
        for(a=0,b=d; a<n;a++,b--)
            ara[a][b]=3;
        c=n/3;
        e=n-c-c;
        for(f=c,x=1; x<=e; f++,x++)
        {
            for(g=c,y=1; y<=e; g++,y++)
                ara[f][g]=1;
        }
        if(n%2==1)
            aa=n/2;
        else
            aa=(n/2)-1;
        ara[aa][aa]=4;
        for(a=0; a<n; a++)
        {
            for(b=0; b<n; b++)
                printf("%d",ara[a][b]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
