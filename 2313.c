#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,ans=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a+c>b){
        if((a != b && b == c) || ( a == c && a != b) || ( a == b && c != b))
            printf("Valido-Isoceles\n");
        else if(a == b && a == c){
            printf("Valido-Equilatero\n");
        }
        else if(a != b && b != c && a != c){
            printf("Valido-Escaleno\n");
        }
    }
    else{
        ans++;
    }

    if(ans==0){
        if(pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(a,2) + pow(b,2))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");

    return 0;
}
