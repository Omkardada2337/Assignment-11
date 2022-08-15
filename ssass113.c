// 3. Write a function to check whether a given number is Prime or not. (TSRS)
int checkprime(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &num);
    if (checkprime(num) == 1)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    getch();
    return 0;
}

int checkprime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n)
    {
        return 1;
    }
    return 0;
}