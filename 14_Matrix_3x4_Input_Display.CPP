/* Q14: Accept and display a 3x4 matrix using a 2D array */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int m[3][4], i, j;

    clrscr();

    printf("Enter 12 elements of the 3x4 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", m[i][j]);
        printf("\n");
    }

    getch();
}
