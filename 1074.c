#include<stdio.h>
int main()
{
    int num,num1;
    scanf("%d",&num1);
    while(num1!=0){
        scanf("%d",&num);
        if(num%2==0 && num!=0){
            if(num<0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("EVEN POSITIVE\n");
            }
        }
        else if(num%2!=0 && num!=0){
            if(num<0){
                printf("ODD NEGATIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }
        else if(num==0){
            printf("NULL\n");
        }
        num1--;
    }
    return 0;
}
