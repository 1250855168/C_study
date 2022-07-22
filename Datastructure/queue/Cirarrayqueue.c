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

int main()
{
    struct Cirarrayqueue cirarrayqueue;
    Init_Cirarrayqueue(&cirarrayqueue);

    return 0;
}

void Init_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue)
{
    cirarrayqueue->front = 0;
    cirarrayqueue->rear = 0;
}

void push_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue, int x)
{
    if ((cirarrayqueue->front) % MAX == (cirarrayqueue->rear + 1) % MAX)
    {
        printf("This is full queue\n");
    }
    else
    {
        cirarrayqueue->array[(cirarrayqueue->rear) % MAX] = x;
        cirarrayqueue->rear++;
    }
}

void Pop_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue)
{
    if (cirarrayqueue->front == 0 && cirarrayqueue->rear == 0)
    {
        printf("This is empty queue\n");
    }
    else
    {
        cirarrayqueue->front++;
    }
}

int front_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue)
{
    if (cirarrayqueue->front == cirarrayqueue->rear)
    {
        printf("This is no a element:");
        return 0;
    }
    else
    {
        return cirarrayqueue->array[(cirarrayqueue->front) % MAX];
    }
}

int Isempt_Cirarrayqueue(struct Cirarrayqueue *cirarrayqueue)
{
    if (cirarrayqueue->front == cirarrayqueue->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
