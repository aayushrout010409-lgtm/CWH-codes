#include <stdio.h>

int main() {
int prod=1,i,n;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++) {
    prod=prod*i;
}
printf("the factorial of the number is: %d\n",prod);
    return 0;
}