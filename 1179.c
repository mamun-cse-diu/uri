#include<stdio.h>
int main()
{
    int par[5],impar[5],i,j=0,k=0,n,a=0,b=0;
    for(i=0; i<15; i++){
        scanf("%d",&n);
        if(n%2==0){
            par[j]=n;
            j++;
            a++;
        }
        else{
            impar[k]=n;
            k++;
            b++;
        }
        if(j==5){
            for(j=0; j<5; j++){
                printf("par[%d] = %d\n",j,par[j]);
            }
            j=0;
            a=0;
        }
        else if(k==5){
            for(k=0; k<5; k++){
                printf("impar[%d] = %d\n",k,impar[k]);
            }
            k=0;
            b=0;
        }
    }
    for(k=0; k<b; k++){
        printf("impar[%d] = %d\n",k,impar[k]);
    }
    for(j=0; j<a; j++){
        printf("par[%d] = %d\n",j,par[j]);
    }
    return 0;
}
