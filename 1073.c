#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum,i=1;
    scanf("%d",&num);
    while(i!=num+1){
        if(i%2==0){
           sum=pow(i,2);
           printf("%d^2 = %d\n",i,sum);
        }
        i++;
    }
    return 0;
}
