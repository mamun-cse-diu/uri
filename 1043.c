#include<stdio.h>
int main()
{
    float  a,b,c,s,area,a1;
    scanf("%f %f %f",&a,&b,&c);

   if(a+b>c && b+c>a && a+c>b){
        s=(a+b+c);
        printf("Perimetro = %.1f\n",s);
    }
    else{
        area=((a+b)/2)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
