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
    int x;
    int min;
    printf("\n");
    for (int i = 0; i < 9; i++)
    {
        min=arry[i];
        for (int j=i; j < 9; j++)
        {
            if(min>arry[j+1])
            {
                min=arry[j+1];
                x=j+1;
            }
        }
        if (min!=arry[i])
        {
           int temp=arry[i];
           arry[i]=arry[x];
           arry[x]=temp;
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d\t", arry[i]);
        }
        printf("\n");
    }
}