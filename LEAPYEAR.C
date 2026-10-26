//program to find leap year
#include<stdio.h>
#include<conio.h>
void main()
{
 int yaer;
 clrscr();
 printf("Enter year:");
 scanf("%d",&year);
 if((year%400==0||(year%4==0&& year%100 ?=100))
  printf("%d is a leap year.",year);
 else
  printf("%d is not a leap year.",year);
 getch();
}
