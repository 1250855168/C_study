#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * @brief 求一个二维数组的平均值
 * 
 * @param p接收二维数组的地址
 */
void Average_Number(int (*p)[5])
{
    long sum=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum+=*(*(p + i) + j);
        }
    }
    printf("%ld\n",sum/25);
}

/**
 * @brief 输入一个【5】X【5】的数组
 * 
 * @param p 接收二维数组的地址
 */
void Input_Arry(int (*p)[5])
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            *(*(p + i) + j)=rand();
        }
    }
}

/**
 * @brief 打印一个【5】X【5】的数组
 * 
 * @param p 接收二维数组的地址
 */
void Printf_Arry(int (*p)[5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", *(*(p + i) + j));
        }
        printf("\n");
    }
}

/**
 * @brief 求一个二维数组的最大值
 * 
 * @param p接收二维数组的地址
 */
void Max_arry(int (*p)[5])
{
    int max = __LDBL_MIN_10_EXP__;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (*(*(p + i) + j)>max)
            {
                max=*(*(p + i) + j);
            }
            
        }
    }
    printf("%d\n",max);
}

/**
 * @brief 求一个二维数组的最小值
 * 
 * @param p接收二维数组的地址
 */
void Min_arry(int (*p)[5])
{
    int min = TMP_MAX;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (*(*(p + i) + j)<min)
            {
                min=*(*(p + i) + j);
            }
        }
    }
    printf("%d\n",min);
}

int main()
{
    int arry[5][5] = {0};
    Input_Arry(arry);
    Printf_Arry(arry);
    Average_Number(arry);
    Min_arry(arry);
    Max_arry(arry);
}