#include <stdio.h>

int main()
{
    int math, eng, sci;
    printf("enter math marks:");
    scanf("%d", &math);
    printf("enter sci marks:");
    scanf("%d", &sci);
    printf("enter eng marks:");
    scanf("%d", &eng);
    printf("the marks are %d %d and %d\n", math, sci, eng);
    if (math < 33 || sci < 33 || eng < 33)
    {
        printf("fail due to less marks in individual subject(s)");
    }
    else if (math + sci + eng / 3 < 40)
    {
        printf("fail due due to  less total percentage");
    }
    else
    {
        printf(" you are pass!");
    }
    return 0;
}