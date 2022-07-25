#include "2048.h"

void Print_2048(int (*array)[4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("|");
            printf("_%-3d_", array[i][j]);//打印2048的表格与数字
        }
        printf("|");
        printf("\n");
    }
}

int Get_2_4()
{
    int b[4] = {2, 2, 2, 4};
    srand((unsigned)time(NULL));
    int i = rand() % 4;
    return b[i];//得到一个数字 2的几率为75% 4为25%
}

void Init_2048(int (*array)[4])
{
    int i;
    int j;
    srand((unsigned)time(NULL));//使用随机函数
    for (int x = 0; x < 2; x++)
    {
        do
        {
            i = rand() % 4;//获得随机值
            j = rand() % 4;
        } while (array[i][j] != 0);
        array[i][j] = Get_2_4();//把随机值赋给数组
    }
}

void Get_directions(int (*array)[4], int *sum)
{
    dire = getchar();//获得一个方向按键
    switch (dire)
    {
    case UP:
        Up(array, sum);
        break;
    case DOWN:
        Down(array, sum);
        ;
        break;
    case LEFT:
        Left(array, sum);
        ;
        break;
    case RIGHT:
        Right(array, sum);
        ;
        break;
    default:
        break;
    }
}

void Up(int (*array)[4], int *sum)
{
    for (int i = 0; i < 4; i++)//进行第一次平移
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[j][i] == 0)//判断0 最多重复平移3次
            {
                for (int x = j; x < 3; x++)
                {
                    array[x][i] = array[x + 1][i];
                    array[x + 1][i] = 0;
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[j][i] == array[j + 1][i])//把相邻相等的数 加在一起
            {
                array[j][i] = array[j + 1][i] * 2;
                (*sum )+= array[j + 1][i];
                array[j + 1][i] = 0;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)//进行第二次平移
        {
            if (array[j][i] == 0)
            {
                for (int x = j; x < 3; x++)//最多平移3次
                {
                    array[x][i] = array[x + 1][i];
                    array[x + 1][i] = 0;
                }
            }
        }
    }
}

void Down(int (*array)[4], int *sum)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j > 0; j--)//进行第一次平移
        {
            int x = 3;
            while (x > 0)//最多平移3次
            {
                if (array[x][i] == 0 && array[x - 1][i] != 0)
                {
                    int temp = array[x][i];
                    array[x][i] = array[x - 1][i];
                    array[x - 1][i] = temp;
                }
                x--;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j > 0; j--)
        {
            if (array[j][i] == array[j - 1][i])//把相邻相等的数 加在一起
            {
                array[j][i] = array[j - 1][i] * 2;
                (*sum)+=array[j - 1][i];
                array[j - 1][i] = 0;
            }
        }
    }
    for (int i = 0; i < 4; i++)//进行第二次平移
    {
        for (int j = 3; j > 0; j--)
        {
            int x = 3;
            while (x > 0)
            {
                if (array[x][i] == 0 && array[x - 1][i] != 0)//最多平移3次
                {
                    int temp = array[x][i];
                    array[x][i] = array[x - 1][i];
                    array[x - 1][i] = temp;
                }
                x--;
            }
        }
    }
}

void Left(int (*array)[4], int *sum)
{
    for (int i = 0; i < 4; i++)//进行第一次平移
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == 0)//最多平移3次
            {
                for (int x = j; x < 3; x++)
                {
                    array[i][x] = array[i][x + 1];
                    array[i][x + 1] = 0;
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)//把相邻相等的数 加在一起
        {
            if (array[i][j] == array[i][j + 1])
            {
                array[i][j] = array[i][j + 1] * 2;
                (*sum)+=array[i][j + 1];
                array[i][j + 1] = 0;
            }
        }
    }
    for (int i = 0; i < 4; i++)//进行第二次平移
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == 0)
            {
                for (int x = j; x < 3; x++)//最多平移3次
                {
                    array[i][x] = array[i][x + 1];
                    array[i][x + 1] = 0;
                }
            }
        }
    }
}

void Right(int (*array)[4], int *sum)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j > 0; j--)//进行第一次平移
        {
            int x = 3;
            while (x > 0)//最多平移3次
            {
                if (array[i][x] == 0 && array[i][x - 1] != 0)
                {
                    int temp = array[i][x];
                    array[i][x] = array[i][x - 1];
                    array[i][x - 1] = temp;
                }
                x--;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j > 0; j--)//把相邻相等的数 加在一起
        {
            if (array[i][j] == array[i][j - 1])
            {
                array[i][j] = array[i][j - 1] * 2;
                (*sum)+=array[i][j - 1];
                array[i][j - 1] = 0;
            }
        }
    }
    for (int i = 0; i < 4; i++)//进行第二次平移
    {
        for (int j = 3; j > 0; j--)
        {
            int x = 3;
            while (x > 0)
            {
                if (array[i][x] == 0 && array[i][x - 1] != 0)//最多平移3次
                {
                    int temp = array[i][x];
                    array[i][x] = array[i][x - 1];
                    array[i][x - 1] = temp;
                }
                x--;
            }
        }
    }
}

int IsChange(int (*array)[4], int (*temp)[4])//判断数组是否改变
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (temp[i][j] != array[i][j])
            {
                return 1;
            }
        }
    }
    return 0;
}

int Get_add_number(int (*array)[4])//如果数组改变 给数组为的位置添加一个 2or4的数字
{
    int i;
    int j;
    srand((unsigned)time(NULL));

    do
    {
        i = rand() % 4;
        j = rand() % 4;
    } while (array[i][j] != 0);
    array[i][j] = Get_2_4();
}

void add_number(int (*array)[4], int (*temp)[4])//添加新数字
{
    if (IsChange(array, temp))
    {
        Get_add_number(array);
    }
}

int Is(int (*array)[4])//判断数组 还有可以改变的可能
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((array[i][j] == 0) || (array[i][j] == array[i + 1][j]) || array[i][j] == array[i][j + 1])//相邻不能相等 不能有0
            {
                return 0;
            }
        }
    }
    return 1;
}