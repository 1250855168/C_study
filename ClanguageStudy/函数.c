#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Max(int a,int b,int c)
{
   if (a<b)
   {
    a=b;
    if (a<c)
    {
        a=c;
    }
    return a;
   }
}

int Printf()
{
    printf("please choose one of the following:\n");
    printf(" 1)copy                2)move files\n");
    printf(" 3)remove files        3)quit\n");
    printf(" Enter the number of your choice:");
    return 0;
}

void output(int x)
{
    switch (x)
    {
    case 1:printf("copy files\n");
        break;
    case 2:printf("move files\n");
        break;
        case 3:printf("remove files\n");
        break;
    default:
    printf("quit\n");
        break;
    }
}

int Select(int min, int max)
{
    int x;
    Printf();
    while (1)
    {
        if (!(scanf("%d", &x)))
        {
            getchar();
            return 4;
        }
        if (x < min || x > max)
        {
            printf("\n");
            printf("please again!!!\n");
            Printf();
        }
        else
        {
            return x;;
        }
    }
}


int main()
{
    output(Select(1,4));
    return 0;
}

