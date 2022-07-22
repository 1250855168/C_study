#include "mathematical operation.h"

/**
 * @brief 数学表达式运算
 *
 */
int Mathematical_operation(Node *linkedliststack, Linkedlistqueue *linkedlistqueue, const unsigned char *expr);
/**
 * @brief 初始化 queue 链表
 *
 * @return struct Linkedlistqueue*
 */
struct Linkedlistqueue *Iinit();
/**
 * @brief 判断数学运算符的优先级
 *
 * @param expr
 * @return int
 */
int Prioperate(unsigned char expr);
void Ope_mid_past(Node *linkedliststack, Linkedlistqueue *linkedlistqueue, const unsigned char *expr);

Node *linkedliststack = NULL;
struct Linkedlistqueue *linkedlistqueue = NULL;

int main()
{
    linkedlistqueue = Iinit();
    const unsigned char *expr = "1+2*5+6/6+9*7";
    printf("%d\n", Mathematical_operation(linkedliststack, linkedlistqueue, expr));
    return 0;
}

struct Linkedlistqueue *Iinit()
{
    struct Linkedlistqueue *temp = malloc(sizeof(linkedlistqueue));
    temp->front = NULL;
    temp->rear = NULL;
}
int Prioperate(unsigned char expr)
{
    if (expr == '-' || expr == '+')
    {
        return 1;
    }
    if (expr == '*' || expr == '/')
    {
        return 2;
    }
}

void Ope_mid_past(Node *linkedliststack, Linkedlistqueue *linkedlistqueue, const unsigned char *expr)
{
    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] >= '0' && expr[i] <= '9')
        {
            Push_linkedlistqueue(expr[i]);
        }
        else
        {
            if (Isemptystack())
            {
                push_linkedliststack(expr[i]);
            }
            else
            {
                if (Prioperate(expr[i]) > Prioperate(top_linkedliststack()))
                {
                    push_linkedliststack(expr[i]);
                }
                else
                {
                    Push_linkedlistqueue(top_linkedliststack());
                    pop_linkedliststack();
                    push_linkedliststack(expr[i]);
                }
            }
        }
    }
    while (!Isemptystack())
    {
        Push_linkedlistqueue(top_linkedliststack());
        pop_linkedliststack();
    }
}
int Easy_mathoperate(int left, int right, unsigned char expr)
{
    switch (expr)
    {
    case '*':
        return left * right;
        break;
    case '/':
        return left / right;
        break;
    case '+':
        return left + right;
        break;
    case '-':
        return left - right;
        break;
    default:
        break;
    }
}
int Mathematical_operation(Node *linkedliststack, Linkedlistqueue *linkedlistqueue, const unsigned char *expr)
{
    Ope_mid_past(linkedliststack, linkedlistqueue, expr);
    while (!Isemptyqueue())
    {
        if (front_linkedlistqueue() >= '0' && front_linkedlistqueue() <= '9')
        {
            push_linkedliststack(front_linkedlistqueue());
            Pop_linkedlistqueue();
        }
        else
        {
            int right = top_linkedliststack() - 48;
            pop_linkedliststack();
            int left = top_linkedliststack() - 48;
            pop_linkedliststack();
            int new = Easy_mathoperate(left, right, front_linkedlistqueue());
            Pop_linkedlistqueue();
            push_linkedliststack(new + 48);
        }
    }
    int tmep = top_linkedliststack();
    pop_linkedliststack();
    return tmep - 48;
}