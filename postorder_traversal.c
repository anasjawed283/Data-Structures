#include <stdio.h>
#include <stdlib.h>
struct tree {
    int val;
    struct tree* left;
    struct tree* right;
};
typedef struct tree TreeNode;
TreeNode* newTree(int data)
{
    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
    root->val = data;
    root->left = NULL;
    root->right = NULL;
    return (root);
}

void postorder(TreeNode* root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->val);
}

int main()
{
    TreeNode* t = newTree(9);
    t->left = newTree(1);
    t->left->left = newTree(10);
    t->left->right = newTree(7);
    t->left->right->left = newTree(2);
    t->left->right->right = newTree(5);
    t->left->right->right->left = newTree(0);
    t->left->right->right->right = newTree(16);
    t->right = newTree(19);
    t->right->left = newTree(18);
    t->right->right = newTree(20);
    printf("postorder traversal of the above tree is:\n");
    postorder(t);

    return 0;
}
