#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int arry[10];
    for (int i = 0; i < 10; i++)
    {
        arry[i] = rand()%100;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arry[i]);
    }
    printf("\n");
    for (int i = 0; i < 9; i++)
    {
        for (int j=0; j < 9 - i; j++)
        {
            if (arry[j] > arry[j + 1])
            {
               int  temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d\t", arry[i]);
        }
        printf("\n");
    }
}