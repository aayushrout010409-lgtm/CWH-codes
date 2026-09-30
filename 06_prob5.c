#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks>=90){
    printf("grade A");
}
    else if(marks<90 && marks>=80){
    printf("grade B");
}
   else if(marks<80 && marks>=70){
    printf("grade C");
}
   else if(marks<70 && marks>=60){
    printf("grade D");
}
    else if(marks<60 && marks>=50){
    printf("grade E");
}
    else{
    printf("grade F");
}

    return 0;
}


    


