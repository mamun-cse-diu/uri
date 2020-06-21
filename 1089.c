#include <stdio.h>
int main()
{
    int array[10005];
    int n,i,x = 0;

    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        x = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &array[i]);
        }

        for(i = 0; i < n; i++){
            if(array[i] < array[(i + 1)%n]){
                if(array[(i + 1)%n] > array[(i + 2)%n])
                    x++;
            }
            if(array[i] > array[(i + 1)%n]){
                if(array[(i + 1)%n] < array[(i + 2)%n])
                    x++;
            }
        }
        printf("%d\n",x);
    }

 return 0;

}
