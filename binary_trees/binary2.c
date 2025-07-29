#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newlink(int data){
    struct node *temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


void preorder(struct node *root){
    if(!root)
        return;
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);

}

void inorder(struct node *root){
    if(!root)
        return;
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}

void postorder(struct node *root){
    if(!root)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}

int main(){
    struct node *root = NULL;
    root = newlink(1);
    root->left = newlink(2);
    root->right = newlink(3);

    root->left->left = newlink(4);
    root->left->right = newlink(5);
    root->right->left = newlink(6);
    root->right->right = newlink(7);

    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    free(root);

    return 0;
}

