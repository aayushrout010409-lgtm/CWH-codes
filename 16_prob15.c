#include <stdio.h>

int main() {
int n=8,i=1,sum=0;
for(int i=1;i<11;i++){
    sum=sum+n*i;
}
printf("the sum of the first ten multiples of 8 is: %d\n",sum);
    return 0;
}