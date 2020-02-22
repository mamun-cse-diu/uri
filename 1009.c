#include<stdio.h>
int main()
{
    char nam[20];
    float c,b,d,e;
    scanf("%s %f %f",&nam,&b,&c);
    d=(c*15)/100;
    e=d+b;
    printf("TOTAL = R$ %.2f\n",e);
    return 0;
}
