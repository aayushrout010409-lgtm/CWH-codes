#include <stdio.h>

int main() {
int n,i;
printf("enter the number of elements:");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    printf("enter the %d value:\n",i+1);
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
printf("%d",a[i]);
    return 0;
}