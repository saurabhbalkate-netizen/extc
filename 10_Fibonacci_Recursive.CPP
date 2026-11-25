/* Q10: Fibonacci Series (first n numbers) - Recursive approach */
#include <stdio.h>
#include <conio.h>
#include <string.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

void main()
{
    int n, i;

    clrscr();

    printf("Enter how many Fibonacci numbers: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++)
        printf("%d ", fib(i));

    printf("\n");
    getch();
}
