// 2. Write a function to calculate HCF of two numbers. (TSRS)
int hcf(int, int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;
    system("cls");

    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
    printf("HCF of %d and %d is %d", num1, num2, hcf(num1, num2));
    getch();
    return 0;
}

int hcf(int n1, int n2)
{
    int i;
    if (n2 >= n1)
    {
        for (i = n1; i > 1; i--)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                return i;
            }
        }
    }
    else
    {
        for (i = n2; i > 1; i--)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                return i;
            }
        }
    }
}