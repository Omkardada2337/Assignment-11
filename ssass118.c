// 8. Write a function to print PASCAL Triangle. (TSRN)
long long int fact(long long int);
long long int comb(long long int, long long int);
void printpascal(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int row;
    system("cls");

    printf("Enter the number of rows :");
    scanf("%d", &row);
    printpascal(row);
    getch();
    return 0;
}
void printpascal(int r)
{
    int i, j, k, x;
    for (i = 1; i <= r; i++)
    {
        k = 1;
        x = 0;
        for (j = 1; j <= 2 * r - 1; j++)
        {
            if (j >= (r + 1) - i && j <= (r - 1) + i && k)
            {
                printf("%d ", comb(i-1, x));
                x++;
                k = 0;
            }
            else
            {
                printf("  ");
                k = 1;
            }
        }
        printf("\n");
    }
}

long long int fact(long long int n)
{
    long long int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

long long int comb(long long int N, long long int R)
{
    long long int combination;
    combination = fact(N) / (fact(R) * fact(N - R));
    return combination;
}
