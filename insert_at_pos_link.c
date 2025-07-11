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
void insertPos(struct node *head,int pos,int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    struct node *ptr=NULL;
    ptr=head;
    pos--;
    while(--pos){
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}

int main(){
    struct node *head=NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 30;
    head->next = NULL;
    
    newlink(head,40);
    newlink(head,50);

    insertPos(head,3,45);

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



