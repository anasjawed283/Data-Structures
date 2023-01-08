//______________________________________________INSERTION IN CIRCULAR LINKED LIST________________________________________________//
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};

void traversal(struct Node* head){
    struct Node *ptr=head;
    do{
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr !=head);
}

//________________________________________________________________________________________________________________________________
//INSERTION AS HEAD IN FIRST//
struct Node* InsertAtFirst(struct Node*head, int data)
{
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p=head->next;//created a pointer p and pointed it on the next node from head//
    while(p->next!=head){
        p=p->next;
    }
    //AT this point p points at the last node of the circular linked list//
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
//________________________________________________________________________________________________________________________________
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
    head=InsertAtFirst(head,54);
    traversal(head); 
	return 0;
}
