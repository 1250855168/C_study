#include"linkedliststack.h"



Node *Firstcreatstack()
{
    struct Node *p = (Node *)malloc(sizeof(Node));
    printf("please input a number:");
    scanf("%d", &p->data);
    p->next = NULL;
    return p;
}

void push_linkedliststack(Node *stack)
{
    if (stack->next == NULL)
    {
        stack->next = Firstcreatstack();
    }
    else
    {
        struct Node *p = (Node *)malloc(sizeof(Node));
        printf("please input a number:");
        scanf("%d", &p->data);
        p->next = NULL;
        p->next = stack->next;
        stack->next = p;
    }
}

void pop_linkedliststack(Node *stack)
{
    if (stack->next == NULL)
    {
        printf("This is tmpty stack!");
        return;
    }
    else
    {
        Node *temp = stack->next;
        stack->next = stack->next->next;
        free(temp);
        temp = NULL;
    }
}

int top_linkedliststack(Node *stack)
{
    if (stack->next == NULL)
    {
        printf("This is tmpty stack:");
        return 0;
    }
    else
    {
        return stack->next->data;
    }
}


int Isempty_linkedliststack(Node *stack)
{
    if (stack->next == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}