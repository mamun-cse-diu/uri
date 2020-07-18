#include<stdio.h>

int main()
{
    char arr1[10],arr2[10];
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s %s", arr1, arr2);
        if(arr1[1]=='t'){
                if(arr2[1]=='e' || arr2[1]=='a')
                    printf("Jogador 1 venceu\n");
                else
                    printf("Aniquilacao mutua\n");
            }
        else if(arr1[1]=='e'){
                if(arr2[1]=='a')
                    printf("Jogador 1 venceu\n");
                else if(arr2[1]=='e')
                    printf("Sem ganhador\n");
                else
                    printf("Jogador 2 venceu\n");
            }
        else if(arr1[1]=='a'){
                if(arr2[1]=='a')
                    printf("Ambos venceram\n");
                else
                    printf("Jogador 2 venceu\n");
            }
    }

    return 0;
}
