//program to find simple interest
#include<stdio.h>
#include<conio.h>
void main()
{
 float p, r, t, simple_interest;
 clrscr();
 printf("Enter p:");
 scanf("%f",&p);
 printf("Enter r:");
 scanf("%f",&r);
 printf("Enter t:");
 scanf("%f",&t);
 simple_interest=(p*r*t)/100;
 printf("simple interest=%.2f",simple_interest);
 getch();
}
