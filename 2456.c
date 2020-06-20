#include <stdio.h>

int main(){
    int i, v[5];
    int dec=0,inc=0;
    scanf("%d", &v[0]);
    for(i = 1; i < 5; i++){
        scanf("%d", &v[i]);
        if(v[i-1] < v[i])
            dec++;
        if(v[i-1] > v[i])
            inc++;
    }
    if(dec==4)
        printf("C\n");
    else if(inc==4)
        printf("D\n");
    else
        printf("N\n");
    return 0;
}
