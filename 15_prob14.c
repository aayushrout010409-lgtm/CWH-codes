#include <stdio.h>

int main() {
//first ten natural numbers sum//
int sum=0,i;
for(int i=1 ; i<11; i++){
    sum=sum+i;
}
printf("sum of the first ten natural numbers is:%d\n",sum);
    return 0;
}