#if !defined(ARRAYSTACH_H)
#define ARRAYSTACH_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
typedef struct Arraystack
{
    int array[MAX];
    int top;
} Arraystack;
/**
 * @brief 初始化栈
 *
 * @param arraystack
 */
void Iint_arraystack(struct Arraystack *arraystack);
/**
 * @brief 入栈
 *
 * @param arraystack
 */
void push_arraystack(struct Arraystack *arraystack, int x);

/**
 * @brief 出栈
 *
 * @param arraystack
 */
void Pop_arraystack(struct Arraystack *arraystack);
/**
 * @brief head element
 *
 * @param arraystack
 * @return int
 */
int top_arraystack(struct Arraystack *arraystack);
/**
 * @brief 判断是否为空栈
 *
 * @param arraystack
 */
int Isempty_arraystack(struct Arraystack *arraystack);

#endif // ARRAYSTACH_H
