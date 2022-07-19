#include"2048.h"

void Init(int *array)
{
    int array[4][4]={0};
    srand(time(NULL));
    int b[16]={0,2,4,4,2,4};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j]=b[((unsigned short)rand())%16];
            printf("|");
            printf("_%-3d_",array[i][j]);
        }
        printf("|");
        printf("\n");
    } 
}


int Is(int *array)
{
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        if ((array[i][j]==array[i+1][j])&&array[i][j]==array[i][j+1])
        {
            return 0;
        }
    }
}
return 1;
}

