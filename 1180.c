#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    long long int x[n];
    for(i=0; i<n; i++){
        scanf("%lld",&x[i]);
    }
    for(i=0; i<n; i++){
        k=0;
        for(j=0; j<n; j++){
            if(x[i]>x[j])
                k++;
        }
        if(k==0){
            printf("Menor valor: %lld\n",x[i]);
            printf("Posicao: %d\n",i);
            break;
        }
    }
    return 0;
}
