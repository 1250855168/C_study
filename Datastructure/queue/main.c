#include"linkedlistqueue.h"


int main()
{
    linkedlistqueue *queue=Init_queue();
    Push_linkedlistqueue(queue, 3);
    printf("%d\n",front_linkedlistqueue(queue));
    Pop_linkedlistqueue(queue);
    Push_linkedlistqueue(queue, 5);
    Push_linkedlistqueue(queue, 6);
    Push_linkedlistqueue(queue, 7);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",front_linkedlistqueue(queue));
        Pop_linkedlistqueue(queue);
    }
    
    return 0;
}
