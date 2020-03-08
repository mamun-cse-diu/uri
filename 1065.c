#include<stdio.h>
int main()
{
    int i=0,j=0,num;
    while(i!=5){
       scanf("%d",&num);
       if(num%2==0){
        j++;
       }
       i++;
    }
    printf("%d valores pares\n",j);
    return 0;
}
