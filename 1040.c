#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n5,avg1,avg2,sum;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    avg1 = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1f\n",avg1);
    if(avg1>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg1<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(avg1>=5.0 && avg1<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&n5);
        printf("Nota do exame: %.1f\n",n5);
        avg2 = (avg1+n5)/2;
        if(avg2>=5.0){
            printf("Aluno aprovado.\n");
        }
        else if(avg2<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg2);
    }
    return 0;
}
