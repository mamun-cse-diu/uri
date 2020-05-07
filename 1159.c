#include<stdio.h>
int main()
{
    int x,sum=0,i;
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        i=1;
        while(i!=6){
            if(x%2==0){
                sum = sum+x;
                i++;
            }
            x++;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
