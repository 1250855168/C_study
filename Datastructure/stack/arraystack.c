#include"arraystack.h"


int Isempty_arraystack(struct Arraystack *arraystack)
{
    if (arraystack->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Iint_arraystack(struct Arraystack *arraystack)
{
    arraystack->top = -1;
}

void push_arraystack(struct Arraystack *arraystack, int x)
{
    if (arraystack->top == MAX)
    {
        printf("This is full stack!");
    }
    else
    {
        arraystack->array[++(arraystack->top)] = x;
    }
}

void Pop_arraystack(struct Arraystack *arraystack)
{
    if (Isempty_arraystack(arraystack))
    {
        printf("This is empty stack!");
    }
    else
    {
        arraystack->top--;
    }
}

int top_arraystack(struct Arraystack *arraystack)
{
    if (Isempty_arraystack(arraystack))
    {
        printf("This is empty stack:");
        return 0;
    }
    else
    {
        return arraystack->array[arraystack->top];
    }
}
