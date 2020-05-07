#include<stdio.h>
int main()
{
    int n,x,y,sum=0;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d %d",&x,&y);
        while(y!=0){
           if(x%2!=0){
                sum = sum+x;
                y--;
           }
           x++;
        }
        printf("%d\n",sum);
        sum=0;
        n--;
    }
    return 0;
}
