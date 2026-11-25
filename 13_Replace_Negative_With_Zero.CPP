/* Q13: Replace all negative elements in a 1D array with zero */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int a[20], n, i;

    clrscr();

    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
            a[i] = 0;
    }

    printf("\n\nArray after replacing negatives with 0:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    getch();
}
