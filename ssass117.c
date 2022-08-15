// 7. Write a function to print first N terms of Fibonacci series (TSRN)
void fibo(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    fibo(N);
    getch();
    return 0;
}

void fibo(int n)
{
    int a = -1, b = 1, c;
    while (n != 0)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        n--;
    }
}