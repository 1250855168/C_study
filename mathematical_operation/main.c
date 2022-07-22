#include "mathematical operation.h"

/**
 * @brief 数学表达式运算
 *
 */
void Mathematical_operation();
linkedlistqueue *Iinit()
{
    linkedlistqueue *temp = malloc(sizeof(linkedlistqueue));
    temp->front = NULL;
    temp->rear = NULL;
}
Node *linkedliststack=NULL;
int main()
{
    linkedlistqueue*linkedlistqueue = Iinit();
    push_linkedliststack('A');
    push_linkedliststack('B');
    push_linkedliststack('C');
    for (int i = 0; i < 3; i++)
    {
        printf("%c\n", top_linkedliststack());
        pop_linkedliststack();
    }
    printf("%d\n", Isemptystack(linkedliststack));
    Push_linkedlistqueue(linkedlistqueue, 'D');
    Push_linkedlistqueue(linkedlistqueue, 'E');
    Push_linkedlistqueue(linkedlistqueue, 'F');
    for (int i = 0; i < 3; i++)
    {
        printf("%c\n", front_linkedlistqueue(linkedlistqueue));
        Pop_linkedlistqueue(linkedlistqueue);
    }
    printf("%d\n", Isemptyqueue(linkedlistqueue));

    return 0;
}

void Mathematical_operation()
{
}