#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a,b;
    scanf("%d %d",&n1,&n2);
    if(n1<n2){
        a=n1;
        b=n2;
    }
    else{
        a=n2;
        b=n1;
    }
    while(a!=b+1){
        if(a%13!=0)
            sum = sum+a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}
