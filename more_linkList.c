#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

void no_of_nodes(struct node *head);
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

struct node *at_end(struct node *ptr,int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    
    ptr->next = temp;
    return temp;
}

struct node *at_begin(struct node *head,int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    head=temp;		// this does not get reflected as this is local to the func
    return head;    // why do  have to return head // why just head=temp does not work as we are working by pointers
                    // so it should just work by reference
					// Ans :- when we pass head we are passing the content in head and not head pointer
					// so the changes in linked list will get reflected in linked list but 
					// the head pointer will not change
}


int main(){
    struct node *head=NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 30;
    head->next = NULL;
    
    head = at_begin(head,20);

    no_of_nodes(head);
    printNodes(head);

    free(head);
    return 0;
}

void no_of_nodes(struct node *head){
    if(head==NULL){
        printf("Linked List is Empty");
    }
    int count=0;
    struct node *ptr = NULL;    // using another variable so as to not mess up head
    ptr = head;
    while(ptr!=NULL){
        count++;
        ptr = ptr->next;
    }
    printf("%d\n",count);
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



