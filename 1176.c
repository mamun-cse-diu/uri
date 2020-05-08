#include<stdio.h>
int main()
{
    int num,i,j,k;
    long long int n[61];
    n[0]=0;
    n[1]=1;
    for(i=2; i<61; i++){
        n[i]=n[i-1]+n[i-2];
    }
    scanf("%d",&num);
    while(num!=0){
        scanf("%d",&k);
        printf("Fib(%d) = %lld\n",k,n[k]);
        num--;
    }
    return 0;
}
