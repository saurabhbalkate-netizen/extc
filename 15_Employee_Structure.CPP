/* Q15: Employee structure (name, ID, salary) for 5 employees */
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee
{
    char name[20];
    int id;
    float salary;
};

void main()
{
    int i;
    struct employee e[5] = {
        {"Amit",   101, 25000.00},
        {"Neha",   102, 30000.50},
        {"Rahul",  103, 28000.75},
        {"Priya",  104, 35000.00},
        {"Suresh", 105, 22000.25}
    };

    clrscr();

    printf("%-5s %-10s %-10s\n", "ID", "Name", "Salary");
    printf("--------------------------\n");
    for (i = 0; i < 5; i++)
        printf("%-5d %-10s %-10.2f\n", e[i].id, e[i].name, e[i].salary);

    getch();
}
