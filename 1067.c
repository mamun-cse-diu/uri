#include<stdio.h>
int main()
{
    int num,i=0;
    scanf("%d",&num);
    while(i!=num+1){
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
