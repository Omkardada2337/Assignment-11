// 5. Write a function to print first N prime numbers (TSRN)
void printprime(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    printprime(N);
    getch();
    return 0;
}
void printprime(int n)
{
    int i, j;

    for (i = 2; i < 10000; i++)
    {

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j && n)
        {
            printf("%d ", i);
            n--;
        }
    }
}