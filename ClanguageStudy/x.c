#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Getarray(int *a, int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp=a[i];
                a[i] = a[j];
                a[j]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int a[10] = {0};
    Getarray(a, 10);
    return 0;
}