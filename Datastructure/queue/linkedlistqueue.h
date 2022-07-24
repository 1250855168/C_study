#if !defined(LINKEDLISTQUEUE_H)
#define LINKEDLISTQUEUE_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct linkedlistqueue
{
    Node *front;
    Node *rear;
} linkedlistqueue;


//最后需要给Queue free()释放空间 

linkedlistqueue* Init_queue();
/**
 * @brief 创建第一个队列
 *
 * @param linkedlistqueu
 */
void Firstcreat_linkedlistqueue(linkedlistqueue *linkedlistqueu);
/**
 * @brief 入队
 *
 * @return linkedlistqueue*
 */
void Push_linkedlistqueue(linkedlistqueue *linkedlistqueu);
/**
 * @brief 出队
 *
 */
int Pop_linkedlistqueue(linkedlistqueue *linkedlistqueu);
/**
 * @brief 第一个元素
 *
 * @param linkedlistqueu
 * @return int
 */
int front_linkedlistqueue(linkedlistqueue *linkedlistqueu);

#endif // LINKEDLISTQUEUE_H
