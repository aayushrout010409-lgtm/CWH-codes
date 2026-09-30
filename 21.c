#include <stdio.h>

int main() {
int n,i;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++) 
{
    scanf("%d",&a[i]);
}
int even,odd;
even = 0;
odd = 0;
for(i=0;i<n;i++)
{
if(a[i]%2==0)
    even++;
else
    odd++;
}
printf("even elements:%d\n",even);
printf("odd elements:%d\n",odd);

    return 0;
}