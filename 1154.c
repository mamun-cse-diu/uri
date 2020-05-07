#include<stdio.h>
int main()
{
    int age,n=0;
    float avg,sum=0;
    while(1){
        scanf("%d",&age);
        if(age<0)
            break;
        sum = sum+age;
        n++;
    }
    avg = sum/n;
    printf("%.2f\n",avg);
    return 0;
}
