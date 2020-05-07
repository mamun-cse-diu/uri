#include<stdio.h>
int main()
{
    int n,sum=1;
    scanf("%d",&n);
    while(n!=0){
        sum = sum*n;
        n--;
    }
    printf("%d\n",sum);
    return 0;
}
