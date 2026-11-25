/* Q9: Fibonacci Series (first n numbers) - Iterative approach */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int n, i, a = 0, b = 1, c;

    clrscr();

    printf("Enter how many Fibonacci numbers: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    getch();
}
