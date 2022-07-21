#include "Manages_System.h"

int main()
{
    contact my_contact;
    Init(&my_contact);
    while (1)
    {
        Printf();
        printf("请输入你的选择项：");
        int x = scanf("%u", &choose);
        int y;
        while (x == 0)
        {
            while (getchar() != '\n')
            {
            }
            y = 1;
            if (y == 1)
            {
                printf("请重新输入你的选择项：");
                x = scanf("%u", &choose);
                y++;
            }
        }
        switch (choose)
        {
        case EXIT:
            Save(&my_contact);
            printf("成绩管理系统关闭！\n");
            break;
        case ADD:
            Add(&my_contact);
            break;
        case DEL:
            Del(&my_contact);
            break;
        case SEARCH:
            Search(&my_contact);
            break;
        case REVISE:
            Revise(&my_contact);
            break;
        case SHOW:
            Show(&my_contact);
            break;
        case SORT:
            Sort(&my_contact);
            break;
        case SAVE:
            Save(&my_contact);
            break;
        case READ:
            Read(&my_contact);
            break;
        default:
            printf("你输入的不是0-8的选项!!!!\n");
            break;
        }
        if (choose == 0)
        {
            break;
        }
    }
    return 0;
}