#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,root,rest1,rest2;
    scanf("%lf %lf %lf",&a,&b,&c);
    root=b*b-(4*a*c);
    if(root<0 || a==0){
        printf("Impossivel calcular\n");
    }
    else{
        rest1=(-b+(sqrt(root)))/(2*a);
        rest2=(-b-(sqrt(root)))/(2*a);
        printf("R1 = %.5lf\n",rest1);
        printf("R2 = %.5lf\n",rest2);
    }
    return 0;
}
