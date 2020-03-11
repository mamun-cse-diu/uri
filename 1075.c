#include<stdio.h>
int main()
{
    int i=1,num;
    scanf("%d",&num);
    while(i!=10001){
        if(i%num==2){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
