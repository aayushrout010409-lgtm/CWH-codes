#include <stdio.h>

int main() {
int a,b,c,d;
printf("enter the no 1:");
scanf("%d",&a);
printf("enter the number 2:");
scanf("%d",b);
printf("enter the number 3:");
scanf("%d",&c);  
printf("enter the number 4:");
scanf("%d",&d);
if(a>b && a>c && a>d){
    printf("the largest number is %d",a);
}
else if(b>a && b>c && b>d){
    printf("the largest number is %d",b);
}
else if(c>a && c>b && c>d){
    printf("the largest number is %d",c);
}
else{
    printf("the largest number is %d",d);
}

    return 0;
}