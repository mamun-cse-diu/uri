#include<stdio.h>
int main()
{
    double a,b,c,A,B,C,D,E;
    scanf("%lf %lf %lf",&a,&b,&c);
    A=.5*a*c;
    B=3.14159*c*c;
    C=.5*(a+b)*c;
    D=b*b;
    E=a*b;
    printf("TRIANGULO: %.3lf\n",A);
    printf("CIRCULO: %.3lf\n",B);
    printf("TRAPEZIO: %.3lf\n",C);
    printf("QUADRADO: %.3lf\n",D);
    printf("RETANGULO: %.3lf\n",E);
return 0;
}
