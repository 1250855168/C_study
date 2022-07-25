#include "2048.h"

int main()
{
    int Array[4][4] = {0};
    Init_2048(Array);
    Print_2048(Array);
    int a = 0;
    while (1)
    {
        int temp[4][4];
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                temp[i][j] = Array[i][j];
            }
        }
        int *sum = &a;
        printf("得分为：%d\n", *sum);
        Get_directions(Array, sum);
        add_number(Array, temp);
        system("clear");
        Print_2048(Array);
        if (Is(Array))
        {
            printf("游戏结束！\n");
            break;
        }
    }

    return 0;
}