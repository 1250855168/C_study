#include <stdio.h>
#include <stdlib.h>

#define MAX 10
typedef struct Arraystack
{
    int array[MAX];
    int top;
} Arraystack;
/**
 * @brief 初始化栈
 *
 * @param arraystack
 */
void Iint_arraystack(struct Arraystack *arraystack);
/**
 * @brief 入栈
 *
 * @param arraystack
 */
void push_arraystack(struct Arraystack *arraystack, int x);

/**
 * @brief 出栈
 *
 * @param arraystack
 */
void Pop_arraystack(struct Arraystack *arraystack);
/**
 * @brief head element
 *
 * @param arraystack
 * @return int
 */
int top_arraystack(struct Arraystack *arraystack);
/**
 * @brief 判断是否为空栈
 *
 * @param arraystack
 */
int Isempty_arraystack(struct Arraystack *arraystack);

int main()
{
    Arraystack arraystack;
    Iint_arraystack(&arraystack);
    for (int i = 0; i < 5; i++)
    {
        push_arraystack(&arraystack, i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",top_arraystack(&arraystack));
        Pop_arraystack(&arraystack);
    }
    
    
    return 0;
}

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
