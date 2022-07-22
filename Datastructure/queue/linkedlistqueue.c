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

int main()
{

    linkedlistqueue linkedlistqueue;
    linkedlistqueue.front = NULL;
    linkedlistqueue.rear = NULL;
    Push_linkedlistqueue(&linkedlistqueue);
    Push_linkedlistqueue(&linkedlistqueue);
    Push_linkedlistqueue(&linkedlistqueue);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",front_linkedlistqueue(&linkedlistqueue));
        Pop_linkedlistqueue(&linkedlistqueue);
    }

    return 0;
}

void Firstcreat_linkedlistqueue(linkedlistqueue *linkedlistqueu)
{
    Node *p = malloc(sizeof(Node));
    printf("please input a number:");
    scanf("%d", &p->data);
    p->next = NULL;
    linkedlistqueu->front = p;
    linkedlistqueu->rear = p;
}

void Push_linkedlistqueue(linkedlistqueue *linkedlistqueu)
{
    if (linkedlistqueu->front == NULL && linkedlistqueu->rear==NULL)
    {
        void Firstcreat_linkedlistqueue(linkedlistqueue *linkedlistqueu);
    }
    else
    {
        Node *p = malloc(sizeof(Node));
        printf("please input a number:");
        scanf("%d", &p->data);
        p->next = NULL;
        linkedlistqueu->rear->next = p;
        linkedlistqueu->rear = p;
    }
}

int Pop_linkedlistqueue(linkedlistqueue *linkedlistqueu)
{
    if (linkedlistqueu->front == NULL)
    {
        printf("queue is empty!");
        return 0;
    }
    else
    {
        Node *temp = linkedlistqueu->front;
        linkedlistqueu->front = linkedlistqueu->front->next;
        free(temp);
        temp = NULL;
    }
}
int front_linkedlistqueue(linkedlistqueue *linkedlistqueu)
{
    if (linkedlistqueu->front == NULL)
    {
        printf("queue is empty!");
        return 0;
    }
    else
    {
        return linkedlistqueu->front->data;
    }
}
