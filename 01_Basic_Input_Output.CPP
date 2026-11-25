/* Q1: Basic Input and Output (getchar/putchar, scanf/printf, gets/puts) */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char ch, sentence[31];
    int a, b;

    clrscr();

    /* Part 1: getchar() and putchar() */
    printf("Enter a single character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    printf("\n");
    while (getchar() != '\n');      /* clear leftover Enter key */

    /* Part 2: scanf() and printf() */
    printf("\nEnter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d = %d\n", a, b, a + b);
    while (getchar() != '\n');      /* clear leftover Enter key */

    /* Part 3: gets() and puts() */
    printf("\nEnter a short sentence (max 30 characters): ");
    gets(sentence);
    printf("You entered: ");
    puts(sentence);

    getch();
}
