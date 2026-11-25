/* Q12: Sort strings using string functions and pointers */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char s[5][20], *p[5], *temp;
    int i, j;

    clrscr();

    printf("Enter 5 strings (one word each):\n");
    for (i = 0; i < 5; i++)
    {
        printf("String %d: ", i + 1);
        scanf("%s", s[i]);
        p[i] = s[i];                /* pointer to each string */
    }

    /* Bubble sort: compare with strcmp(), swap the pointers */
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (strcmp(*(p + j), *(p + j + 1)) > 0)
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    printf("\nStrings in sorted order:\n");
    for (i = 0; i < 5; i++)
        printf("%s\n", *(p + i));

    getch();
}
