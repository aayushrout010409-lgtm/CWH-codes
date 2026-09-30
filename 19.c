#include <stdio.h>

int main() {
int n,i;
printf("enter the number of elements:");
scanf("%d",&n);
int a[n];
for (int i=0;i,n;i++){
    printf("enter the %d value:\n",i+1);
    scanf("%d",&a[i]);
}
int sum=0;
for(int i=0;i<n;i++){
    sum+=a[i];
}
printf("the sum of the elements of the array is:%d\n",sum);
    return 0;
}