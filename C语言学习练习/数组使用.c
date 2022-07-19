#include<stdio.h>

void Max(int x,int *p)
{
   int MAX=0;
   for (int i = 0; i < x; i++)
   {
    if (p[i]>MAX)
    {
       MAX=p[i];
    }
   }
   printf("MAX=%d\n",MAX);
}

void Min(int x,int *p)
{
   int MIN=0;
   for (int i = 0; i < x; i++)
   {
    if (p[i]<MIN)
    {
       MIN=p[i];
    }
   }
   printf("MAX=%d\n",MIN); 
}

void IF(const int *p)
{
    int i;
    for (i = 0; i < 9; i++)
    {
        if (*(p+i)<*(p+i+1))
        {
            continue;
        }
       break; 
    }
    if (i==9)
    {
        printf("它是一个递增数组\n");
    }
    else 
    {
        printf("它不是一个递增数组\n");
    }
}

int main()
{
    int arry[10]={0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arry[i]);
    }
Max(10,arry);
Min(10,arry);
IF(arry);  
    return 0;
}