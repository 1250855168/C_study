#include "mathematical operation.h"

void Firstcreat_linkedlistqueue(char x)
{
    Node *p = malloc(sizeof(Node));
    p->data = x;
    p->next = NULL;
    linkedlistqueue->front = p;
    linkedlistqueue->rear = p;
}

void Push_linkedlistqueue(char x)
{
    if (linkedlistqueue->front == NULL && linkedlistqueue->rear == NULL)
    {
        Firstcreat_linkedlistqueue(x);
    }
    else
    {
        Node *p = malloc(sizeof(Node));
        p->data = x;
        p->next = NULL;
        linkedlistqueue->rear->next = p;
        linkedlistqueue->rear = p;
    }
}

int Pop_linkedlistqueue()
{
    if (linkedlistqueue->front == NULL)
    {
        printf("queue is empty!");
        return 0;
    }
    else
    {
        Node *temp = linkedlistqueue->front;
        linkedlistqueue->front = linkedlistqueue->front->next;
        free(temp);
        temp = NULL;
    }
}
char front_linkedlistqueue()
{
    if (linkedlistqueue->front == NULL)
    {
        printf("queue is empty!");
        return 0;
    }
    else
    {
        return linkedlistqueue->front->data;
    }
}
int Isemptyqueue()
{
    if (linkedlistqueue->front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

Node *Firstcreatstack(char x)
{
    struct Node *p = (Node *)malloc(sizeof(Node));
    p->data = x;
    p->next = NULL;
    return p;
}

Node * push_linkedliststack(char x)
{
    if (linkedliststack == NULL)
    {
        linkedliststack = Firstcreatstack(x);
    }
    else
    {
        struct Node *p = (Node *)malloc(sizeof(Node));
        p->data = x;
        p->next = NULL;
        p->next = linkedliststack;
        linkedliststack = p;
    }
    return linkedliststack;
}

Node * pop_linkedliststack()
{
    if (linkedliststack == NULL)
    {
        printf("This is tmpty stack!");
        return NULL;
    }
    else
    {
        Node *temp = linkedliststack;
        linkedliststack = linkedliststack->next;
        free(temp);
        temp = NULL;
    }
    return linkedliststack;
}

 char top_linkedliststack()
{
    if (linkedliststack == NULL)
    {
        printf("This is tmpty stack!");
        return -1;
    }
    else
    {
        return linkedliststack->data;
    }
}

int Isemptystack()
{
    if (linkedliststack == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}