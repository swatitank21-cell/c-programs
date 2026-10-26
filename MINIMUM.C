//program to find out maximun
#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2;
  clrscr();
  printf("Enter First Number:");
  scanf("%d",&num1);
  printf("Enter Second Number:");
  scanf("%d",&num2);
  if(num1>num2)
    printf("\nMaximum=%d",num1);
  else
    printf("\nMaximum=%d",num2);
  getch();
}
