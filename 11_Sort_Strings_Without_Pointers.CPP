/* Q11: Sort strings using string functions (without pointers) */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char s[5][20], temp[20];
    int i, j;

    clrscr();

    printf("Enter 5 strings (one word each):\n");
    for (i = 0; i < 5; i++)
    {
        printf("String %d: ", i + 1);
        scanf("%s", s[i]);
    }

    /* Bubble sort using strcmp() and strcpy() */
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (strcmp(s[j], s[j + 1]) > 0)
            {
                strcpy(temp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], temp);
            }
        }
    }

    printf("\nStrings in sorted order:\n");
    for (i = 0; i < 5; i++)
        printf("%s\n", s[i]);

    getch();
}
