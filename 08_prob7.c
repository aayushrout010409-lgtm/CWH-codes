#include <stdio.h>

int main() {
float population =100000,year;
for(int year=1;year<=10;year++)
{ population=population+population*0.1;
  printf("population at the end of the year%d=%.0f\n", year, population);

}
    return 0;
}