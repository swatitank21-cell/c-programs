#include<stdio.h>
#include<conio.h>
void main()
{
 float price,total,discount,finalpayment;
 int quantity;
 clrscr();
 printf("Enter price:");
 scanf("%f",&price);
 printf("Enter quantity:");
 scanf("%d",&quantity);
 total=price*quantity;
 if(total>1000)
  discount=total*0.15;
 else
  discount=total*0.10;
 finalpayment=total-discount;
 printf("\ntotal purchase=%.2f",total);
 printf("\ndiscount=%.2f",discount);
 printf("\nfinalpayment=%.2f",finalpayment);
 getch();
}

