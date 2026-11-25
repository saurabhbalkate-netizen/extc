/* Q8: Call by Reference (using pointers) */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void multiply(int *p)
{
    *p = *p * 5;
    printf("Inside function : value = %d\n", *p);
}

void main()
{
    int num;

    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Before function call: num = %d\n", num);
    multiply(&num);
    printf("After function call : num = %d (changed)\n", num);

    getch();
}
