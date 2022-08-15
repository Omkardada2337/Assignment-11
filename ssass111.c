// 1. Write a function to calculate LCM of two numbers. (TSRS)
int lcm(int, int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;
    system("cls");

    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
    printf("LCM of %d and %d is %d", num1, num2, lcm(num1, num2));
    getch();
    return 0;
}

int lcm(int n1, int n2)
{
    int i;
    if (n2 >= n1)
    {
        for (i = n2; i < n1 * n2; i++)
        {
            if (i % n1 == 0 && i % n2 == 0)
            {
                return i;
            }
        }
    }
    else
    {
        for (i = n1; i < n1 * n2; i++)
        {
            if (i % n1 == 0 && i % n2 == 0)
            {
                return i;
            }
        }
    }
}