#include<stdio.h>
int main()
{
    float s=0,n=1,i;
    for(i=1; i<=39; i=i+2){
        s = s+(i/n);
        n=n*2;
    }
    printf("%.2f\n",s);
    return 0;
}
