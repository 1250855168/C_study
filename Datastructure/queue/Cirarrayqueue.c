#include"Cirarrayqueue.h"

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
