#include <stdio.h>

int main() {
float celcius,farhenheit;
printf("Enter temp in celcius:");
scanf("%f",&celcius);

farhenheit=(celcius*9.0/5.0)+32;
printf("the temp in farhenheit is:%f",farhenheit);
    return 0;
}