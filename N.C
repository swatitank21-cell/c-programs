
#include <stdio.h>
#include <conio.h>

void main()
{
    int a,n;
    clrscr();
    printf("Enter n:");
    scanf("%d",&n);
    for (a = 1; a <= n; a = a + 2)
    {
        printf("\n%d ", a);
    }

    getch();
}
