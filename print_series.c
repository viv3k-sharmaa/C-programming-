#include <stdio.h>
int main() {
  int n , i;
printf("enter the value of n :");
scanf("%d" , &n);
printf("series is : ");
for (i = 1 ; i <= n ; i++){
printf("%d ", i*i);
}
return 0;
}
