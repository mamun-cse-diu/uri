#include<stdio.h>
int main()
{
    int i,j,k;
    long long int n[1000];
    scanf("%d",&k);
    j=0;
    for(i=0; i<1000; i++){
        n[i] = j;
        j++;
        if(j==k)
            j=0;
    }

    for(i=0; i<1000; i++){
        printf("N[%d] = %lld\n",i,n[i]);
    }
    return 0;
}
