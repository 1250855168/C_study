#include "AVL.h"

int main()
{
    struct AVL *root = NULL;
    Insert_AVL(&root, 10);
    printf("%d\n",root->height);
    Insert_AVL(&root, 15);
    printf("%d\n",root->height);
    Insert_AVL(&root, 18);
    printf("%d\n",root->height);
    Insert_AVL(&root, 151);
    printf("%d\n",root->height);
    Insert_AVL(&root, 1);
    Midordertraverse(root);
    // printf("%d\n",root->height);
    // Midordertraverse(root);
    // printf("\n");
    // printf("%d\n", Height(root));
    // root = Delete_AVL(root, 151);
    // Midordertraverse(root);
    // printf("\n");
    // printf("%d\n", Height(root));
    return 0;
}