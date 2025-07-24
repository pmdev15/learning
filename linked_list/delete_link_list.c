#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

void printNodes(struct node *head);

void newlink(struct node *head,int data){
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    
    ptr->next=temp;
}

struct node *del_first_node(struct node *head){
    if(head==NULL){
        printf("Linked List is already empty\n");
        return head;
    }
    else{
        struct node *temp = NULL;
        temp = head;
        head=head->next;
        free(temp);
        temp = NULL;
        return head;
    }
}

void del_last_node(struct node *head){
    if(head==NULL){
        printf("Linked List is already empty\n");
    }
    else if(head->next == NULL){
        free(head);
        head = NULL;
    }
    else{
        struct node *temp = NULL;
        temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void del_pos(struct node **head,int pos){
    struct node *current = *head;
    struct node *previous = *head;
    if(*head == NULL){
        printf("List is already empty");
    }
    else if(pos==1){
        *head = current->next;
        free(current);
        current = NULL;
    }
    else{
        while(pos!=1){
            previous = current;
            current = current->next;
            pos--;
        }
        previous->next = current->next;
        free(current);
        current = NULL;
    }
}

struct node *del_node(struct node *head){
	struct node *temp = head;
	while(temp!=NULL){
		temp = temp->next;
		free(head);
		head = temp;
	}
	return head;
	
}

int main(){
    struct node *head=NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 30;
    head->next = NULL;
    
    newlink(head,40);
    newlink(head,50);

    //head = del_first_node(head);
    //del_last_node(head);
    //del_pos(&head,2);
	head = del_node(head);

    printNodes(head);
    free(head);
    return 0;
}

void printNodes(struct node *head){
    if(head==NULL){
        printf("Linked List is Empty\n");
    }
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");

}



