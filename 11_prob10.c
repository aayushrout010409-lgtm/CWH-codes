#include <stdio.h>

int main() 
{
int n,i,count;
int positive=0,negative=0,zero=0;
printf("how many numbers do you want to enter?:");
scanf("%d",&count);
for(i=0;i<count;i++)
{
    printf("enter the number%d:",i);
    scanf("%d",&n);
    if(n>0){
        positive++;
    }
    else if(n<0){
        negative++;
    }
    else{
        zero++;
    }
    }
    printf("positive numbers:%d\n",positive);
    printf("negative numbers:%d\n",negative);   
    printf("zero numbers:%d\n",zero);
    return 0;
}