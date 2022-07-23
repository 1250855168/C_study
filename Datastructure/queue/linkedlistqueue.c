#include"linkedlistqueue.h"



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
