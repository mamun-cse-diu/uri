#include<stdio.h>
int main()
{
    int num1,num2,sum=0;
    scanf("%d %d",&num1,&num2);

    if(num1>num2){
        num2++;
        while(num2!=num1){
            if(num2%2!=0){
                sum=sum+num2;
            }
            num2=num2+1;
        }
    }
    else{
        while(num1!=num2){
            if(num1%2!=0){
                sum=sum+num1;
                num1++;
            }
        }
        num1++;
    }
    printf("%d\n",sum);
    return 0;
}
