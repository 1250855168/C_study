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
    // Insert_AVL(&root, 151);
    // printf("%d\n",root->height);
    // Insert_AVL(&root, 1);
    Midordertraverse(root);
    return 0;
}