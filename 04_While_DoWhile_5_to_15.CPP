/* Q4: Print positive integers 5 to 15 using while and do-while loops */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i;

    clrscr();

    /* Using while loop */
    printf("Using while loop:\n");
    i = 5;
    while (i <= 15)
    {
        printf("%d ", i);
        i++;
    }

    /* Using do-while loop */
    printf("\n\nUsing do-while loop:\n");
    i = 5;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 15);

    printf("\n");
    getch();
}
