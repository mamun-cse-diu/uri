#include <stdio.h>
int main(){
  int i;
  int arr[10];
  arr[0] = 1;
  for (i = 1; i < 10; i++) {
    arr[i] = i*arr[i-1];
  }

  int n;
  scanf("%d",&n);

  int sum = 0,m;
  for (i = 1; i<=9; i++) {
    if (arr[i]>n) {
      m = i-1;
      break;
    }
  }

  for (i = m; i >= 0; i--) {
    sum = sum + (n/arr[i]);
    n = n%arr[i];
  }

  printf("%d\n",sum);
  return 0;
}
