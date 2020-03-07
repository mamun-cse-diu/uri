#include<stdio.h>
int main()
{
    int i=0,j=0;
    float num;
    while(i!=6){
       scanf("%f",&num);
       if(num>0){
        j++;
       }
       i++;
    }
    printf("%d valores positivos\n",j);
    return 0;
}
