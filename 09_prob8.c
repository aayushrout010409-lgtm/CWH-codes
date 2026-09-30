#include <stdio.h>

int main() {
int income,tax;
printf("enter your income:\n");
scanf("%d",&income);
if(income>=250000&&income<=500000)
{ tax=income*0.05;
printf("your tax is %d",tax);}
else if(income>500000&&income<=1000000)
{ tax=income*0.2;
printf("your tax is %d", tax);}
else if(income>1000000)
{ tax=income*0.3;
printf("your tax is %d", tax);}
else{
    printf("no tax need to be paid");
}
    return 0;
}