#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,c;
    char arr1[10],arr2[10];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s%s", arr1,arr2);
        if(0==strcmp(arr1,arr2))
            printf("Caso #%d: De novo!\n", i);
        else if(0==strcmp(arr1,"tesoura"))
        {
            if((0==strcmp(arr2,"papel")) || (0==strcmp(arr2,"lagarto")))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(arr2,"pedra")) || (0==strcmp(arr2,"Spock")))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if(0==strcmp(arr1,"papel"))
        {
            if((0==strcmp(arr2,"pedra")) || (0==strcmp(arr2,"Spock")))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(arr2,"tesoura")) || (0==strcmp(arr2,"lagarto")))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if(0==strcmp(arr1,"pedra"))
        {
            if((0==strcmp(arr2,"tesoura")) || (0==strcmp(arr2,"lagarto")))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(arr2,"papel")) || (0==strcmp(arr2,"Spock")))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if(0==strcmp(arr1,"lagarto"))
        {
            if((0==strcmp(arr2,"papel")) || (0==strcmp(arr2,"Spock")))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(arr2,"pedra")) || (0==strcmp(arr2,"tesoura")))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if(0==strcmp(arr1,"Spock"))
        {
            if((0==strcmp(arr2,"tesoura")) || (0==strcmp(arr2,"pedra")))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(arr2,"papel")) || (0==strcmp(arr2,"lagarto")))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    return 0;
}
