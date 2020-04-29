#include<stdio.h>
int main()
{
    int n,num,sum=0,sum_c=0,sum_r=0,sum_s=0;
    float per_c,per_r,per_s,per;
    char a;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d %c",&num,&a);
        if(a=='C'){
            sum=sum+num;
            sum_c=sum_c+num;
        }
        else if(a=='R'){
            sum=sum+num;
            sum_r=sum_r+num;
        }
        else if(a=='S'){
            sum=sum+num;
            sum_s=sum_s+num;
        }
        n--;
    }
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",sum_c);
    printf("Total de ratos: %d\n",sum_r);
    printf("Total de sapos: %d\n",sum_s);
    per = sum;
    per_c = sum_c;
    per_r = sum_r;
    per_s = sum_s;
    printf("Percentual de coelhos: %.2f %%\n",(per_c/per)*100);
    printf("Percentual de ratos: %.2f %%\n",(per_r/per)*100);
    printf("Percentual de sapos: %.2f %%\n",(per_s/per)*100);
    return 0;
}
