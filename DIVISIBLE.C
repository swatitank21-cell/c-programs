
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    clrscr();

    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0)
    {
        printf("First number is divisible by second");
    }
    else
    {
        printf("First number is not divisible by second");
    }

    getch();
}
