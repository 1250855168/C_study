#if !defined(CIRARRAYQUEUE_H)
#define CIRARRAYQUEUE_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct Cirarrayqueue
{
    int array[MAX];
    int front;
    int rear;
} Cirarrayqueue;
/**
 * @brief 初始化队列
 *
 * @param cirarrayqueue
 */
void Init_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue);
/**
 * @brief 入队列
 *
 * @param cirarrayqueue
 */
void push_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue, int x);
/**
 * @brief 出队列
 *
 */
void Pop_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue);
/**
 * @brief 队列的头元素
 *
 */
int front_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue);

/**
 * @brief 判断循环队列是否为空
 * 
 */
int Isempt_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue);


#endif // CIRARRAYQUEUE_H
