#include<stdio.h>
int main() {
   int year;
printf("entrt year");
scanf("%d", &year);
( year % 4 == 0 && year % 100 == 0 && year % 400 == 0  )? printf("leapyear"): printf("not leapyear");
return 0;
}