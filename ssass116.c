// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
void prime(int, int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    system("cls");
    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);
    prime(a, b);
    getch();
    return 0;
}

void prime(int n1, int n2)
{
    int i, j;

    for (i = n1 + 1; i < n2; i++)
    {

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d ", i);
        }
    }
}