#include<stdio.h>
int main()
{
    int x,j;
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        for(j=1; j<=x; j++){
            if(j<x)
                printf("%d ",j);
            else if(j==x)
                printf("%d\n",j);
        }
    }
    return 0;
}
