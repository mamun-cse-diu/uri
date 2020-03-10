#include<stdio.h>
int main()
{
    int num,i=0;
    scanf("%d",&num);
    num=num+1;
    while(i!=6){
        if(num%2!=0){
            printf("%d\n",num);
        }
        num=num+2;
        i++;
    }
    return 0;
}
