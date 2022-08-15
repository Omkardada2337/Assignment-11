// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.
int fact(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int sum = 0, n, i;
    system("cls");
    printf("Enter the value of n :");
    scanf("%d", &n);
    printf("\n\nSum of series ");
    for (i = 1; i <= n; i++)
    {
        sum = sum + (fact(i) / i);
        printf("%d!/%d +", i, i);
    }
    printf("= %d", sum);

    getch();
    return 0;
}
int fact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}