#include<stdio.h>
int main()
{
    int num=1;
    while(num!=101){
        if(num%2==0){
            printf("%d\n",num);
        }
        num++;
    }
    return 0;
}
