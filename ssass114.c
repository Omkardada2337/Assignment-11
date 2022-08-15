// 4. Write a function to find the next prime number of a given number. (TSRS)
int nextprime(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the prime number : ");
    scanf("%d", &N);
    printf("Next prime number after %d is %d", N, nextprime(N));
    getch();
    return 0;
}

int nextprime(int n)
{
    int i, j;
    for (i = n + 1; i < 100000; i++)
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
            return i;
        }
    }
}