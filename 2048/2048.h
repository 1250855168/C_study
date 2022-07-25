#if !defined(MY2048_h)
#define MY2048_h

#include <stdio.h>
#include<stdlib.h>
#include<time.h>


enum direction{UP='w',DOWN='s',LEFT='a',RIGHT='d' }dire;

/**
 * @brief 打印2048的表格
 * 
 * @param array 
 */
void Print_2048(int (*array)[4]);
/**
 * @brief 获取一个2or的数字
 * 
 * @return int 
 */
int Get_2_4();
/**
 * @brief 随机得到两个数字 且数字是2or4的其中一个
 * 
 * @param array 
 */
void Init_2048(int (*array)[4]);
/**
 * @brief 得到一个上下左右的方向
 * 
 * @param array 
 */
void Get_directions(int (*array)[4], int *sum);

/**
 * @brief 向上移动
 * 
 * @param array 
 */
void Up(int (*array)[4], int *sum);
/**
 * @brief 向下移动
 * 
 * @param array 
 */
void Down(int (*array)[4], int *sum);
/**
 * @brief 向右移动
 * 
 * @param array 
 */
void Right(int (*array)[4], int *sum);
/**
 * @brief 向左移动
 * 
 * @param array 
 */
void Left(int (*array)[4], int *sum);
/**
 * @brief 判断是否有改变
 * 
 */
int IsChange(int (*array)[4], int (*temp)[4]);

/**
 * @brief 得到一个2or4的数字
 * 
 */
 int Get_add_number(int (*array)[4]);
/**
 * @brief 增加一个数字 且数字2or4
 * 
 */
void  add_number(int (*array)[4],int (*temp)[4]);


/**
 * @brief 判断还能否继续移动
 * 
 */
int Is(int (*array)[4]);
#endif
