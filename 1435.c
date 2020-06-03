#include<stdio.h>
int main()
{
    int i,j,n,m;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                m=i;
                if(j<m)
                    m=j;
                if(n-i+1<m)
                    m=n-i+1;
                if(n-j+1<m)
                    m=n-j+1;
                if(j==n)
                    printf("%3d\n",m);
                else
                    printf("%3d ",m);
            }
        }
        printf("\n");
    }
    return 0;
}
