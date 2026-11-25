/* Q5: Skip even numbers and print odd numbers from 1 to 10 (for loop) */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i;

    clrscr();

    printf("Odd numbers between 1 and 10:\n");
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            continue;           /* skip even numbers */
        printf("%d ", i);
    }

    printf("\n");
    getch();
}
