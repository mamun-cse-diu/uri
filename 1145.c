#include<stdio.h>
int main()
{
    int x,y,i=1,j,a;
    scanf("%d %d",&x,&y);
    a=y;
    while(y!=0){
        for(j=1; j<=x; j++){
            if(j<x)
                printf("%d ",i);
            else if(j==x)
                printf("%d\n",i);
            i++;
            if(i>a)
                break;
        }
        if(i>a)
            break;
        y--;
    }
    return 0;
}
