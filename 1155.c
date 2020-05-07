#include<stdio.h>
int main()
{
    int i;
    float s=0,n=1;
    for(i=1; i<=100; i++){
        s = s+(n/i);
    }
    printf("%.2f\n",s);
    return 0;
}
