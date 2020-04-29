#include<stdio.h>
int main()
{
    int i=1,j,n;
    while(i<=9){
        j=7;
        n=3;
        while(n!=0){
            printf("I=%d J=%d\n",i,j);
            n--;
            j--;
        }
        i=i+2;
    }
    return 0;
}
