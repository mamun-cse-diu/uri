#include<stdio.h>
int main()
{
    int n,alc=0,gas=0,dies=0;
    while(1){
        scanf("%d",&n);
        if(n==1)
           alc++;
        else if(n==2)
            gas++;
        else if(n==3)
            dies++;
        else if(n==4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alc);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",dies);
    return 0;
}
