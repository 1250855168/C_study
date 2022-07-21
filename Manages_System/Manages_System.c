#include "Manages_System.h"

void Printf()
{
    printf("*****************************************************\n");
    printf("*****0:Exit         1:Add         2:Del**************\n");
    printf("*****3:Search       4:Revise      5:Show*************\n");
    printf("*****6:Sort         7:Save        8:Read*************\n");
    printf("*****************************************************\n");
}
/**
 * @brief 给成绩管理系统初始化
 *
 * @param Capacity 接收首地址
 */
void Init(struct Capacity *Capacity)
{
    Capacity->student = malloc(3 * sizeof(Student)); //动态开辟3个学生的内存
    if (Capacity->student == NULL)
    {
        printf("内存开辟失败");
        return;
    }
    memset(Capacity->student, 0, 3 * sizeof(Student)); //初始话 3个学生的内存为0
    Capacity->size = 0;
    Capacity->capcity = 3;
    Read(Capacity);
    printf("初始化成功！\n");
}

/**
 * @brief 增加内存
 *
 * @param Capacity
 * @return int
 */
int AddCapacity(struct Capacity *Capacity)
{
    struct Student *temp;
    temp = realloc(Capacity->student, sizeof(Student) * (Capacity->capcity + 2)); //判断内存是不是满了，如果满了再开辟2个内存
    if (temp == NULL)
    {
        return 0;
    }
    Capacity->student = temp;
    Capacity->capcity += 2;
    printf("成功增加2个容量\n");
    return 0;
}

/**
 * @brief 添加新学生
 *
 * @param Capacity
 */
void Add(struct Capacity *Capacity)
{
    if (Capacity->size == Capacity->capcity) //判断内存是否足够
    {
        AddCapacity(Capacity);
    }
    printf("请输入学生的名字：");
    scanf("%s", Capacity->student[Capacity->size].Name);
    printf("请输入学生的成绩：");
    scanf("%d", &Capacity->student[Capacity->size].grad);
    Capacity->size++;
    printf("添加成功！\n");
}

/**
 * @brief 删除学生
 *
 * @param Capacity
 */
void Del(struct Capacity *Capacity)
{
    printf("请输入你需要删除人的名字：");
    char Name[12];
    scanf("%s", Name);
    int i;
    for (i = 0; i < Capacity->size; i++)
    {
        if (strcmp(Capacity->student[i].Name, Name) == 0)
        {
            printf("%s同学成功移除!!!\n", Capacity->student[i].Name);
            for (int j = i; j < Capacity->size - 1; j++)
            {
                Capacity->student[j] = Capacity->student[j + 1];
            }
            Capacity->size--;
            break;
        }
    }
    if (i > Capacity->size)
    {
        printf("你找的学生不在管理系统里面：");
    }
}

/**
 * @brief 修改学生成绩
 *
 * @param Capacity
 */

void Revise(struct Capacity *Capacity)
{
    printf("请输入你需要修改成绩人的名字：");
    char Name[12];
    scanf("%s", Name);
    int i;
    for (i = 0; i < Capacity->size; i++)
    {
        if (strcmp(Capacity->student[i].Name, Name) == 0)
        {
            scanf("%d", &Capacity->student[i].grad);
            printf("%s同学修改成功!!!\n", Capacity->student[i].Name);
            break;
        }
    }
    if (i > Capacity->size)
    {
        printf("你找的学生不在管理系统里面!!!\n");
    }
}

/**
 * @brief 展现成绩
 * 
 * @param Capacity 
 */
void Show(struct Capacity *Capacity)
{
    for (int i = 0; i < Capacity->size; i++)
    {
        printf("%s\t", Capacity->student[i].Name);
        printf("%d\n", Capacity->student[i].grad);
    }
}
/**
 * @brief 用冒泡排序给成绩排序
 * 
 * @param Capacity 
 */
void Sort(struct Capacity *Capacity)
{
    for (int i = 0; i < Capacity->size; i++)
    {
        for (int j = i; j < Capacity->size - 1; j++)
        {
            if (Capacity->student[i].grad > Capacity->student[j + 1].grad)
            {
                int temp1 = Capacity->student[i].grad;
                Capacity->student[i].grad = Capacity->student[j + 1].grad;
                Capacity->student[j + 1].grad = temp1;
                char temp[12];
                strcpy(temp, Capacity->student[i].Name);
                strcpy(Capacity->student[i].Name, Capacity->student[j + 1].Name);
                strcpy(Capacity->student[j + 1].Name, temp);
            }
        }
    }
}

/**
 * @brief 保存在成绩管理系统.txt
 * 
 * @param Capacity 
 */
void Save(struct Capacity *Capacity)
{
    FILE *pf;
    pf = fopen("成绩管理系统.txt", "wb");
    if (pf == NULL)
    {
        printf("文件打开错误！！");
    }
    for (int i = 0; i < Capacity->size; i++)
    {
        fwrite(&(Capacity->student[i]), sizeof(Student), 1, pf);
    }
    fclose(pf);
    pf = NULL;
}

/**
 * @brief 读取成绩管理系统内容
 * 
 * @param Capacity 
 */
void Read(struct Capacity *Capacity)
{
    FILE *pf;
    pf = fopen("成绩管理系统.txt", "rb");
    if (pf == NULL)
    {
        printf("文件打开错误！！");
    }
    while (fread(&(Capacity->student[Capacity->size++]), sizeof(Student), 1, pf) != 0)
    {
        if (Capacity->size == Capacity->capcity)
        {
            AddCapacity(Capacity);
        }
    }
    Capacity->size--;
    fclose(pf);
    pf = NULL;
}

/**
 * @brief 查询个人成绩
 * 
 * @param Capacity 
 */
void SearchStudentgrade(struct Capacity *Capacity)
{
    printf("请输入你需要查询成绩人的名字：");
    char Name[12];
    scanf("%s", Name);
    int i;
    for (i = 0; i < Capacity->size; i++)
    {
        if (strcmp(Capacity->student[i].Name, Name) == 0)
        {
            printf("%s同学成绩为%d\n", Capacity->student[i].Name, Capacity->student[i].grad);
            break;
        }
    }
    if (i > Capacity->size)
    {
        printf("你找的学生不在管理系统里面!!!\n");
    }
}

/**
 * @brief 得到班级平均分
 * 
 * @param Capacity 
 */
void ClassAveragegrade(struct Capacity *Capacity)
{
    double sum = 0;
    for (int i = 0; i < Capacity->size; i++)
    {
        sum += Capacity->student[i].grad;
    }
    printf("班级的平均分为%f\n", sum / Capacity->size);
}

/**
 * @brief 得到班级及格率
 * 
 * @param Capacity 
 */
void ClassPassrates(struct Capacity *Capacity)
{
    double sum = 0;
    for (int i = 0; i < Capacity->size; i++)
    {
        if (Capacity->student[i].grad > 60)
        {
            sum++;
        }
    }
    printf("班级及格率为%f\n", sum / Capacity->size);
}

/**
 * @brief 0:退出查找  1:班级平均分  2:及格率  3:个人成绩
 * 
 * @param Capacity 
 */
void Search(struct Capacity *Capacity)
{
    while (1)
    {
        printf("0:退出查找  1:班级平均分  2:及格率  3:个人成绩\n");
        printf("请输入你的选择项：");
        int select;
        int x = scanf("%u", &select);
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
        switch (select)
        {
        case 0:
            printf("选择模式关闭！\n");
            break;
        case 1:
            ClassAveragegrade(Capacity);
            break;
        case 2:
            ClassPassrates(Capacity);
            break;
        case 3:
            SearchStudentgrade(Capacity);
            break;
        default:
            printf("你输入的不是1-3的选项!!!!\n");
            break;
        }
        if (select == 0)
        {
            break;
        }
    }
}