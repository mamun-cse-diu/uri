#include<stdio.h>
int main()
{
    int n,num1,num2,sum;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d %d",&num1,&num2);
        sum=0;
        if(num1>num2){
            num2=num2+1;
            while(num2!=num1){
                if(num2%2==1)
                    sum=sum+num2;
                num2++;
            }
        }
        else if(num2>num1){
            num1=num1+1;
            while(num1!=num2){
                if(num1%2==1)
                    sum=sum+num1;
                num1++;
            }
        }
        else
            sum=0;
        printf("%d\n",sum);
        n--;
    }
    return 0;
}
