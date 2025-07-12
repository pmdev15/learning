#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

void printNodes(struct node *head);

struct node *addtoEmpty(struct node *head,int data){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->prev = NULL;
	temp->next = NULL;
	head = temp;
	return head;
}

struct node *at_beg(struct node *head,int data){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->prev = NULL;
	temp->next = NULL;
	temp->next = head;
	head->prev = temp;
	head = temp;
	return head;
}

void newlink(struct node *head,int data){
	struct node *temp = NULL,*ptr = NULL;
	ptr = head;
	while(ptr->next!=NULL){
		ptr = ptr->next;
	}
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	temp->prev = ptr;
	ptr->next = temp;
}

int main(){

	struct node *head = NULL;
	//head = (struct node *)malloc(sizeof(struct node));
	
	head = addtoEmpty(head,10);
	newlink(head,20);
	newlink(head,30);
	head = at_beg(head,5);

	printNodes(head);
	free(head);

	return 0;
}
void printNodes(struct node *head){
    if(head==NULL){
        printf("Linked List is Empty");
    }
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");

}

