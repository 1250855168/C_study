#include "linkedliststack.h"

int main()
{
    Node *stack = malloc(sizeof(Node));
    stack->next = NULL;
    for (int i = 0; i < 5; i++)
    {
        push_linkedliststack(stack);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", top_linkedliststack(stack));
        pop_linkedliststack(stack);
    }
    free(stack);
    stack=NULL;
    return 0;
}