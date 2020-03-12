#include<stdio.h>
#include <string.h>
int main()
{
    char nam[20],nam1[20],nam2[20];
    scanf("%s %s %s",&nam,&nam1,&nam2);
    if(strcmp(nam,"vertebrado")==0){
        if(strcmp(nam1,"ave")==0){
            if(strcmp(nam2,"carnivoro")==0){
                printf("aguia\n");
            }
            else if(strcmp(nam2,"onivoro")==0){
                printf("pomba\n");
            }
        }
        else if(strcmp(nam1,"mamifero")==0){
            if(strcmp(nam2,"herbivoro")==0){
                printf("vaca\n");
            }
            else if(strcmp(nam2,"onivoro")==0){
                printf("homem\n");
            }
        }
    }
    else if(strcmp(nam,"invertebrado")==0){
        if(strcmp(nam1,"inseto")==0){
            if(strcmp(nam2,"hematofago")==0){
                printf("pulga\n");
            }
            else if(strcmp(nam2,"herbivoro")==0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(nam1,"anelideo")==0){
            if(strcmp(nam2,"hematofago")==0){
                printf("sanguessuga\n");
            }
            else if(strcmp(nam2,"onivoro")==0){
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
