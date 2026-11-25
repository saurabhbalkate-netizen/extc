/* Q7: Call by Value */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void multiply(int x)
{
    x = x * 5;
    printf("Inside function : x = %d\n", x);
}

void main()
{
    int num;

    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Before function call: num = %d\n", num);
    multiply(num);
    printf("After function call : num = %d (unchanged)\n", num);

    getch();
}
