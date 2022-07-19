#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int FoundNumber(int number)
{
    printf("请输入你猜的数字：\n");
    int x = 0;
    scanf("%d", &x);
    if (x == number)
    {
        return 0;
    }

    FoundNumber(number);
}

int main()
{

    srand((unsigned)time(NULL));

    int number1 = rand() % 100 + 1;

    printf("%d\n", number1);

    int c = 0;

    int count = 0;

    printf("请输入你个1-100的数字：\n");

    scanf("%d", &c);

    while (c != number1)
    {
        printf("请重新输入你个1-100的数字：\n");
        scanf("%d", &c);
        count++;
    }

    count++;

    printf("你找到了它：%d\n 你一共用了%d次\n", number1, count);

    return 0;
}