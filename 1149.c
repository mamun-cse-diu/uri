#include<stdio.h>
int main()
{
    int x,n,i,sum=0;
    scanf("%d %d",&x,&n);
    while(1){
        if(n<=0)
            scanf("%d",&n);
        else{
            for(i=1; i<=n; i++){
            sum = sum+x;
            x++;
            }
            printf("%d\n",sum);
            break;
        }
    }
    return 0;
}
