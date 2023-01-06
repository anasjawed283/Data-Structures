//_____________________________________________________________INSERTION_________________________________________________________//
#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* next;
};

void traversal(struct Node* ptr){
    while(ptr !=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    } 
}
//method for insertion at beginning-------------------------------------------------------------------------------------------------
struct Node * InsertBeginning(struct Node *head, int data){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
}
//------------------------------------------------------------------------------------------------------------------------------------
//INSERT AT INDEX//
struct Node * InsertAtIndex(struct Node *head, int data,int index){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node * p=head;//we want to keep the first head as it is//
    int i=0;
    //i!=index-1 because the index which we want to enter is one before the element which is already at that index//
    while(i!=(index-1)){
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next = p->next;//breaking link and then joining to new
    p->next = ptr;
    return head;
}
//----------------------------------------------------------------------------------------------------------------------------------------
//method to insert at END//
struct Node * InsertAtEnd(struct Node *head, int data){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
//--------------------------------------------------------------------------------------------------------------------------------------
//INSERT AFTER A NODE (by taking previous elemet name)
struct Node * InsertAfterNode(struct Node * head, struct Node *prevNode, int data){
    struct Node *ptr =(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
//----------------------------------------------------------------------------------------------------------------------------------------
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
	third->next = NULL;

    traversal(head);
    //head=InsertBeginning(head,55);//chainging the head//
    //head=InsertAtIndex(head,56,1);
    //head=InsertAtEnd(head,56);
    head=InsertAfterNode(head,second,1123);
    traversal(head);
	return 0;
}//IF WE  DONT GIVE RETURN HEAD THE HEAD WONT BE PRINTED//


