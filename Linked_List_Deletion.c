//__________________________________________________________DELETITION________________________________________//
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
//-----------------------------------------------------------------------------------------------------------------
//DELETING THE FIRST ELEMENT//
struct Node * DeleteFirst(struct Node *head){
    struct Node * ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//------------------------------------------------------------------------------------------------------------------
//DELETING AN ELEMENT AT AGIVEN INDEX//
struct Node * DeleteAtIndex(struct Node *head,int index){
    struct Node *p=head;
    struct Node *q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
//--------------------------------------------------------------------------------------------------------------------
//DELETE THE LAST ELEMENT//
struct Node * DeleteAtLast(struct Node *head){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
//----------------------------------------------------------------------------------------------------------------------
struct Node * DeleteAtNode(struct Node *head,int value){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}
//-------------------------------------------------------------------------------------------------------------------------
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
    //head=DeleteFirst(head);//if we keep on running the function the first element keeps on deletition//
    //head=DeleteAtIndex(head,2);
    //head=DeleteAtLast(head);
    head=DeleteAtNode(head,2);
    traversal(head);
	return 0;
}
