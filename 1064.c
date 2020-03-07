#include<stdio.h>
int main()
{
    int i=0,j=0;
    float num,num1=0;
    while(i!=6){
       scanf("%f",&num);
       if(num>0){
        j++;
        num1=num+num1;
       }
       i++;
    }
    num=num1/j;
    printf("%d valores positivos\n",j);
    printf("%.1f\n",num);
    return 0;
}
