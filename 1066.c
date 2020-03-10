#include<stdio.h>
int main()
{
    int num,n=0,i=0,j=0,k=0,l=0;
    while(n!=5){
        scanf("%d",&num);
        if(num>0){
           i++;
           if(num%2==0){
                k++;
           }
           else if(num%2!=0){
                l++;
           }
        }
        else if(num<0){
            j++;
            if(num%2==0){
                k++;
           }
           else if(num%2!=0){
                l++;
           }
        }
        else if(num%2==0){
          k++;
        }
        else if(num%2!=0){
          l++;
        }
        n++;
    }
    printf("%d valor(es) par(es)\n",k);
    printf("%d valor(es) impar(es)\n",l);
    printf("%d valor(es) positivo(s)\n",i);
    printf("%d valor(es) negativo(s)\n",j);
    return 0;
}
