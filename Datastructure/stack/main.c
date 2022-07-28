#include "arraystack.h"

int main()
{
    Arraystack stack;
    Iint_arraystack(&stack);
    for (int i = 0; i < 5; i++)
    {
        push_arraystack(&stack, i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", top_arraystack(&stack));
        Pop_arraystack(&stack);
    }
    return 0;
}