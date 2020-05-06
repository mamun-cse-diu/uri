#include<stdio.h>
int main()
{
    int x,z,n=0,sum=0;;
    scanf("%d %d",&x,&z);
    if(x>=z){
        while(z<=x){
            scanf("%d",&z);
            if(x>=z)
                continue;
            else{
                while(sum<=z){
                    sum = sum+x;
                    n++;
                    x++;
               }
               break;
            }
        }
    }
    else{
        while(sum>=z){
            sum = sum+x;
            n++;
            x++;
       }
    }
    printf("%d\n",n);
    return 0;
}
