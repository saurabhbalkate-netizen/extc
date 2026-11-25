/* Q6: Squares of numbers 1 to 5 except 3 (for loop) */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i;

    clrscr();

    printf("Number\tSquare\n");
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
            continue;           /* skip number 3 */
        printf("%d\t%d\n", i, i * i);
    }

    getch();
}
