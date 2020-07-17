#include<stdio.h>
int main()
{
    char str1[110],str2[110],str3[110];
    fgets(str1,110,stdin);
    fgets(str2,110,stdin);
    fgets(str3,110,stdin);
    printf("%s %s %s",str1,str2,str3);
    printf("%s %s %s",str2,str3,str1);
    printf("%s %s %s",str3,str1,str2);
    printf("%.10s %.10s %.10s",str1,str2,str3);
    return 0;
}
