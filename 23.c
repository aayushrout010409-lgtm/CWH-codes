#include <stdio.h>
int main(){
int n,i;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++) 
{
    scanf("%d",&a[i]);
}
int search;
printf("enter element to search:");
scanf("%d",&search);
for(i=0;i<n;i++){
    if(a[i]==search){
        printf("element found at position%d",i+1);
        break;
    }
    return 0;
}
}