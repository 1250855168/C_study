#include "AVL.h"

int Get_Height(struct AVL *root) //取树的高度
{
    return root ? root->height : 0;
}

struct AVL *Insert_AVL(struct AVL **root, Elemtype data)
{
    if (*root == NULL) //插入新元素
    {
        *root = malloc(sizeof(AVL));
        (*root)->data = data;
        (*root)->height = 0;
        (*root)->left = NULL;
        (*root)->right = NULL;
    }
    if (data > (*root)->data) //新元素与其他元素比大小
    {
        Insert_AVL(&(*root)->right, data);
        (*root)->right->parent = *root;
        int L_height = Get_Height((*root)->left);
        int R_height = Get_Height((*root)->right);
        int Blance = R_height - L_height;
        if (Blance == 2)
        {
            if (data > (*root)->right->data)
            {
                Turn_left(root);
            }
            else
            {
                // RL转
            }
        }
    }
    if (data < (*root)->data) //新元素与其他元素比大小
    {
        Insert_AVL(&(*root)->left, data);
        (*root)->left->parent = *root;
        int L_height = Get_Height((*root)->left);
        int R_height = Get_Height((*root)->right);
        int Blance = L_height - R_height;
        if (Blance == -2)
        {
            if (data > (*root)->right->data)
            {
                // LL转
            }
            else
            {
                // LR转
            }
        }
    }
    (*root)->height = (Get_Height((*root)->left) > Get_Height((*root)->right) ? Get_Height((*root)->left) : Get_Height((*root)->right)) + 1;
}

void Midordertraverse(const struct AVL *root) //中序遍历
{
    if (root == NULL)
    {
        return;
    }
    printf("%d\n", root->data);
    Midordertraverse(root->left);
    Midordertraverse(root->right);
}

int Height(struct AVL *root) //计算树的深度
{
    if (root == NULL)
    {
        return -1;
    }
    int L = Height(root->left);  //左树的深度
    int R = Height(root->right); //右树的深度
    return (L > R ? L : R) + 1;
}

int Max_Left(struct AVL *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data; //返回左树的最大值
}

struct AVL *Delete_AVL(struct AVL *root, Elemtype data) //删除一个结点
{
    if (root == NULL)
    {
        return NULL;
    }
    if (data > root->data) //判断与删除元素得到大小
    {
        root->right = Delete_AVL(root->right, data);
        if (root->right != NULL)
        {
            root->right->parent = root;
        }
    }
    else if (data < root->data) //判断与删除元素得到大小
    {
        root->left = Delete_AVL(root->left, data);
        if (root->left != NULL)
        {
            root->left->parent = root;
        }
    }
    else if (root->left == NULL) //找到删除元素 他的左节点为空的情况
    {
        AVL *temp = root->right;
        free(root);
        root = NULL;
        return temp;
    }
    else if (root->right = NULL) //找到删除元素 他的右节点为空的情况
    {
        AVL *temp = root->left;
        free(root);
        root = NULL;
        return temp;
    }
    else ////找到删除元素 他的右节点和右节点都不为空的情况
    {
        Elemtype temp = Max_Left(root->left); //找到从这个结点树上的 左树上的最大元素
        root->data = temp;                    //替代删除元素的值
        root->left = Delete_AVL(root, temp);  //删除找到从这个结点树上的 左树上的最大元素
    }
    return root;
}

void Turn_left(struct AVL **root) //进行左转
{
    struct AVL *temp1 = (*root)->right;
    struct AVL *temp2 = *root;
    temp2->right=temp1->left;
    temp1->left=temp2;    //重新交换指向 形成左转
    *root = temp1;
}

void Turn_right(struct AVL **root) //进行右转
{
    struct AVL *temp1 = NULL;
    struct AVL *temp2 = NULL;
    if (root != NULL)
    {
        temp1 = (*root)->left; //保存该节点的左结点
    }
    if (temp1 != NULL)
    {
        temp2 = temp1->right; //保存上面结点的右结点
    }
    temp1->right = *root; //重新交换指向 形成右转
    *root = temp1;
    temp1 = temp2;
}