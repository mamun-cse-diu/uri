#include<stdio.h>
int main()
{
    double a,b,c,a1;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>b && a>c){
        a1=a;
        b=b;
    }
    else if(b>a && b>c){
        a1=b;
        b=a;
    }
    else{
        a1=c;
        c=a;
    }
    if(a1>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if((a1*a1)==((b*b)+(c*c))){
            printf("TRIANGULO RETANGULO\n");
        }
        if((a1*a1)>((b*b)+(c*c))){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((a1*a1)<((b*b)+(c*c))){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if((a1==b) && (b==c)){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(((a1!=b) && (b==c)) || ((b!=a1) && (a1==c)) || ((c!=a1) && (a1==b))){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
