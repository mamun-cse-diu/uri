#include<stdio.h>
int main()
{
    int d,m,y;
    scanf("%d %d %d",&d,&m,&y);
    printf("A = %d, B = %d, C = %d\n",d,m,y);
    printf("A = %10d, B = %10d, C = %10d\n",d,m,y);
    printf("A = %010d, B = %010d, C = %010d\n",d,m,y);
    printf("A = %-10d, B = %-10d, C = %-10d\n",d,m,y);
    return 0;
}
