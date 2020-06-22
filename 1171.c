#include <stdio.h>
#include <stdlib.h>

int ascending(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int main(){
    int n,i, c, b;
    scanf("%d",&n);
    int num[n];

    for(i = 0; i < n; i++){
          scanf("%d",&num[i]);
    }

    qsort(num, n, sizeof(int), ascending);
    c = num[0];
    i = 1;
    b = 1;
    while(1){
        if(i == n+1)
            break;
        if(num[i] == c){
            b++;
            i++;
        }
        else{
            printf("%d aparece %d vez(es)\n", c, b);
            c = num[i];
            b = 0;
        }
    }
    return 0;
}
