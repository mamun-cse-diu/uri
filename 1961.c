#include<stdio.h>
int main()
{
    int p,n,i,temp,k=0;
    scanf("%d %d",&p,&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++){
        if(arr[i]>=arr[i+1]){
            temp = arr[i] - arr[i+1];
            if(temp>p){
                printf("GAME OVER\n");
                break;
            }
            else
                k++;
        }
        else{
            temp = arr[i+1] - arr[i];
            if(temp>p){
                printf("GAME OVER\n");
                break;
            }
            else
                k++;
        }
    }
    if(k==n-1)
        printf("YOU WIN\n");
    return 0;
}
