#include<stdio.h>
int main(){
  int n, i, c = 1;
printf("Enter a number :");
sacanf("%d",&n);
for(i=1;i<=n;i++){
  c *= i;
}
printf("the factorial of %d = %d\n",n,c);
return 0;
}
