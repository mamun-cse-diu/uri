#include<stdio.h>
int main()
{
    int x[10],i,n,a=1;
    scanf("%d",&n);
    for(i=0; i<10; i++){
        x[i]=n;
        n=n*2;
    }
    for(i=0; i<10; i++){
        printf("N[%d] = %d\n",i,x[i]);
    }
    return 0;
}
