#include<stdio.h>
int main() {
     int a;
     long long x;
     long long y;
     while(1)
     {
        scanf("%d %lld",&a,&x);
        if(a==0 && x==0)
            break;
         y=x*a;
         printf("%lld\n",y);
     }

    return 0;
}
