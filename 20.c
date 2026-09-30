#include <stdio.h>
int main() {
int n;
printf("enter the number of elements:");
scanf("%d",&n);
int a[n];
for (int i=0;i<n;i++){
    printf("enter the %d value:\n",i+1);
    scanf("%d",&a[i]);
}
int max=a[0];
for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}
printf("the maximum element in the array is:%d\n",max);
int min=a[0];
for(int i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
}
 printf("the minimum element of the array is :%d\n",min);
return 0;
}