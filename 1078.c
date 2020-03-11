#include<stdio.h>
int main()
{
    int i=1,num,sum;
    scanf("%d",&num);
    while(i!=11){
        sum=i*num;
        printf("%d x %d = %d\n",i,num,sum);
        i++;
    }
    return 0;
}
