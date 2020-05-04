#include<stdio.h>
int main()
{
    int n,i=1,j,k=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    return 0;
}
