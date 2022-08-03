#include "AVL.h"

int main()
{
    struct AVL *root = NULL;
    root = Insert_AVL(root, 10);
    root = Insert_AVL(root, 15);
    root = Insert_AVL(root, 5);
    root = Insert_AVL(root, 151);
    root = Insert_AVL(root, 1);
    Midordertraverse(root);
    printf("\n");
    printf("%d\n", Height(root));
    root = Delete_AVL(root, 151);
    Midordertraverse(root);
    printf("\n");
    printf("%d\n", Height(root));
    return 0;
}