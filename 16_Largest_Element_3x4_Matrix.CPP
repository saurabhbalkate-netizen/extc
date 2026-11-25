/* Q16: Find the largest element of a 3x4 matrix */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int m[3][4], i, j, large;

    clrscr();

    printf("Enter 12 elements of the 3x4 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", m[i][j]);
        printf("\n");
    }

    large = m[0][0];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            if (m[i][j] > large)
                large = m[i][j];

    printf("\nLargest element = %d\n", large);

    getch();
}
