#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,x,y;
    while(1){
        scanf("%d",&a);
        if(a==0)
            break;
        scanf("%d %d", &b, &c);
        d = a*b;
        x = (d*100)/c;
        y=sqrt(x);
        printf("%d\n",y);
    }
    return 0;
}
