#include<stdio.h>
int main()
{
    int i=1,j=7,n;
    while(i<=9){
        n=3;
        while(n!=0){
            printf("I=%d J=%d\n",i,j);
            n--;
            j--;
        }
        i=i+2;
        j=j+5;
    }
    return 0;
}
