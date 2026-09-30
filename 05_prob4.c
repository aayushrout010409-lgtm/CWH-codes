#include <stdio.h>

int main() {
int n,i,prod;
    printf("Enter a number: ");
    scanf("%d", &n);
    prod = 1;
    for(i=1; i<=n; i++) {
        prod = prod * i;
    }
    printf("Factorial of %d is %d", n, prod);
    return 0;
}