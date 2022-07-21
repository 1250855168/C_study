/**
 * @file 结构体共用体.c
 * @author 杨春华 (1250855168.com)
 * @brief   结构体共用体使用
 * @version 0.1
 * @date 2022-07-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef  __BUGE__
#define __BUGE__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define M_IN(X, Y) ((X) > (Y) ? (Y) : (X))
#else
#endif
typedef struct Student
{
    int id;
    int math;
    int English;
    int Chinese;
    double average;
} Student;

/**
 * @brief 学生成绩输入取平均值
 *
 * @param student
 */
void Is(Student *student)
{
    printf("请输入学号：");
    scanf("%d", &student->id);
    printf("请输入数学成绩：");
    scanf("%d", &student->math);
    printf("请输入语文成绩：");
    scanf("%d", &student->Chinese);
    printf("请输入英语成绩：");
    scanf("%d", &student->English);
    student->average = (student->math + student->Chinese + student->English) / 3;
    printf("他的平均成绩为：%f\n", student->average);
}

/**
 * @brief 猜数字 在随机数里没有
 *
 * @param x 输入的数字
 */
void Found()
{
    srand(time(NULL));
    int x;
    printf("请输入一个数字:0-99的数字");
    scanf("%d", &x);
    int a[20];
    for (int i = 0; i < 20; i++)
    {
        a[i] = rand() % 20;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", a[i]);
    }
    int i;
    for (i = 0; i < 20; i++)
    {
        if (x != a[i])
        {
            continue;
        }
        else
        {
            printf("找到\n");
            break;
        }
    }
    if (i == 20)
    {
        printf("没有找到\n");
    }
}

struct gg
{
    int a;
    int b;
} gg[3];

int main()
{
    // Student student;
    // Is(&student);
    // Found();
    // Found();
    printf("%d\n",M_IN(5,9));
    return 0;
}