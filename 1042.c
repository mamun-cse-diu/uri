#include<stdio.h>
int main()
{
    int num1,num2,num3,i=0;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        if(num2>=num3){
            i=num3;
        }
        else{
            i=num2;
        }
        while(i<=num1){
            if(i==num1 || i==num2 || i==num3){
            printf("%d\n",i);
            }
            i++;
        }
    }
    else if(num2>num1 && num2>num3){
        if(num1>=num3){
            i=num3;
        }
        else{
            i=num1;
        }
        while(i<=num2){
            if(i==num1 || i==num2 || i==num3){
            printf("%d\n",i);
            }
            i++;
        }
    }
    else{
        if(num2>=num1){
            i=num1;
        }
        else{
            i=num2;
        }
        while(i<=num3){
            if(i==num1 || i==num2 || i==num3){
                printf("%d\n",i);
            }
            i++;
        }
    }

    printf("\n%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);
    return 0;
}
