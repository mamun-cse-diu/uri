#include<stdio.h>
int main()
{
    int a,b;
    double a_g,b_g;
    int n,cont,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %d %lf %lf",&a,&b,&a_g,&b_g);
        cont = 0;
        while(a<=b){
            a *= (a_g/100.0) + 1.0;
            b *= (b_g/100.0) + 1.0;
            cont++;
            if(cont>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (cont <= 100)
            printf("%d anos.\n", cont);
    }
    return 0;
}
