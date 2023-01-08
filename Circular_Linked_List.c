//______________________________________________CIRCULAR LINKED LIST________________________________________________//
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
//Change in Traversal Code//
void traversal(struct Node* head){
    struct Node *ptr=head;
    do{
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr !=head);
}

int main(){
	struct Node* head;
	struct Node* second;
	struct Node* third;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1; 
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = head;

    traversal(head);
	return 0;
}
/*CAN ALOSO BE DONE BY THIS/////
void traversal(struct Node* head){
    struct Node *ptr=head;
    printf("Element:%d\n",ptr->data);
    ptr=ptr->next;
    while(ptr !=head){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    } 
}*/
