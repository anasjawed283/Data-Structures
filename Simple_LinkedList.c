//--------------------------------------------------------------------------------------------------------------------------------//
//CREATING A STRUCTURE FOR CRETION OF LINKED LIST FOR STORING 3 NODES ALEMETS AND ADDRESSES//
// linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
void traversal(struct Node* ptr)
{
    while(ptr !=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 10;
	head->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = NULL;

    traversal(head);
	return 0;
}
