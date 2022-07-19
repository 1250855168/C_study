#include <stdio.h>

int Get1(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return Get1(x - 1) + 2;
}
int Get2(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return Get2(x - 1) * x;
}
void Hanio_Step(int n, char A, char B, char C)
{
    if (1 == n)
        printf("%c->%c\n", A, C);
    else
    {
        Hanio_Step(n - 1, A, C, B);
        printf("%c->%c\n", A, C);
        Hanio_Step(n - 1, B, A, C);
    }
}

int fibonacii(int x)
{
    if (x <= 2)
    {
        return 1;
    }
    return fibonacii(x - 2) + fibonacii(x - 1);
}
int nu(int x)
{
    if (x == 0)
    {
        return 0;
    }
    printf("%d", x % 10);
    nu(x / 10);
    return 0;
}
int main()
{
    // Hanio_Step(2, 'A', 'B', 'C');
    printf("\n");
    Hanio_Step(3, 'A', 'B', 'C');
    return 0;
}