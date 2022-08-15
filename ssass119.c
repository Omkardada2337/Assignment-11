// 9. Write a program in C to find the square of any number using the function.
int square(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the number  : ");
    scanf("%d", &N);
    printf("Square of %d is %d", N, square(N));
    getch();
    return 0;
}

int square(int n)
{
    return n * n;
}