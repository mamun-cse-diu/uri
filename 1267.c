#include <stdio.h>
int main()
{
    int n,d,i,j,k,l,sum;
    while(1)
    {
        scanf("%d %d",&n,&d);

        if(n==0 && d==0)
          break;

        int ara[d][n];

        for(i=0; i<d; i++)
        {
            for(j=0; j<n; j++)
                scanf("%d",&ara[i][j]);
        }

        for(k=0; k<n; k++)
        {
            sum = 0;
            for(l=0; l<d; l++)
                sum+=ara[l][k];
            if(sum==d)
            {
                printf("yes\n");
                break;
            }
            else
                sum=0;
        }
        if(sum==0)
            printf("no\n");
    }
    return 0;
}
