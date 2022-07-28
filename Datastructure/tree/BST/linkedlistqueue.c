#include "linkedlistqueue.h"

linkedlistqueue *Init_queue()
{
    linkedlistqueue *p = malloc(sizeof(linkedlistqueue));
    p->front = NULL;
    p->rear = NULL;
    return p;
}

void Firstcreat_linkedlistqueue(linkedlistqueue *linkedlistqueu, Element data)
{
    Node *p = malloc(sizeof(Node));
    p->data = data;
    p->next = NULL;
    linkedlistqueu->front = p;
    linkedlistqueu->rear = p;
}

void Push_linkedlistqueue(linkedlistqueue *linkedlistqueu, Element data)
{
    if (linkedlistqueu->front == NULL && linkedlistqueu->rear == NULL)
    {
        Firstcreat_linkedlistqueue(linkedlistqueu, data);
    }
    else
    {
        Node *p = malloc(sizeof(Node));
        p->data = data;
        p->next = NULL;
        linkedlistqueu->rear->next = p;
        linkedlistqueu->rear = p;
    }
}

void Pop_linkedlistqueue(linkedlistqueue *linkedlistqueu)
{
    if (Isempty_linkedlistqueue(linkedlistqueu))
    {
        printf("queue is empty!");
        return;
    }
    if (linkedlistqueu->front->next == NULL)
    {
        linkedlistqueu->front = NULL;
        linkedlistqueu->rear = NULL;
    }
    else
    {
        Node *temp = linkedlistqueu->front;
        linkedlistqueu->front = linkedlistqueu->front->next;
        free(temp);
        temp = NULL;
    }
}
Element front_linkedlistqueue(linkedlistqueue *linkedlistqueu)
{
    if (Isempty_linkedlistqueue(linkedlistqueu))
    {
        printf("queue is empty!");
        return 0;
    }
    else
    {
        return linkedlistqueu->front->data;
    }
}

int Isempty_linkedlistqueue(linkedlistqueue *linkedlistqueu)
{
    if (linkedlistqueu->front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
