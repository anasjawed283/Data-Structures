#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* temp= (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return (temp);
}
void Inorder(struct node* root)
{
	if (root == NULL)
		return;
	Inorder(root->left);
	printf("%d ", root->data);
	Inorder(root->right);
}
int main()
{
    int arr[7];
    printf("Enter 5 elements in order:\n");
    for(int i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
	struct node* root = newNode(arr[0]);
	root->left = newNode(arr[1]);
	root->right = newNode(arr[2]);
	root->left->left = newNode(arr[3]);
	root->left->right = newNode(arr[4]);
	root->right->right=newNode(arr[5]);
	root->left->right->left=newNode(arr[6]);
	printf("\nInorder traversal of binary tree is \n");
	Inorder(root);
	getchar();
	return 0;
}
	
