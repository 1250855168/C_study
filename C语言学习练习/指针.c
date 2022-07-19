#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>



int Found_Max(int (*p)[5])
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0;j< 5; j++)
        {
            *(*(p+i)+j)=rand();
        }
    }
     for (int i = 0; i < 10; i++)
    {
        for (int j = 0;j< 5; j++)
        {
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
    int MAX=__DBL_MIN_EXP__;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0;j< 5; j++)
        {
            if (*(*(p+i)+j)>MAX)
            {
                MAX=*(*(p+i)+j);
            }
        }
    }
    return MAX;
    
}

typedef struct 指针
{
    /* data */
};


int main()
{

int array[10][5];
printf("%d\n",Found_Max(array));
}