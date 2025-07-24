#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

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

int main(){
    struct node *head=NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 30;
    head->next = NULL;
    
    //newlink(head,40);     // this is useless because after executing the below code it appends next to head
    //newlink(head,50);     // so this part gets erased  // to use this part first traverse the ptr to end of the node
    //no_of_nodes(head);
    //printNodes(head);

    // another way of insertion
    // in the above way we were traversing till we find the null then inserting
    // but in this case we make another ptr then always updating the ptr to the end node
    // so it adds the next node to the end of the previous node
    
    struct node *ptr=NULL;
    ptr = head;
    ptr = at_end(ptr,60);
    ptr = at_end(ptr,70);

    no_of_nodes(head);
    printNodes(head);

    free(head);
    return 0;
}




