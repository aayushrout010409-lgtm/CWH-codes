#include <stdio.h>

int main() {
int n,i;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++) 
{
    scanf("%d",&a[i]);
}
int positive=0,negative=0,zero=0;
for(i=0;i<n;i++){
    if(a[i]>0)
    positive++;
    else if(a[i<0])
    negative++;
    else
    zero++;
}
printf("no of postitive value:%d\n",positive);
printf("no of negative value:%d\n ",negative);
printf("no of zero value:%d",zero);
return 0;
}
