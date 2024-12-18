#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node* right;
    struct Node* left;
}Node;

Node* createNode(int val){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void preorder(Node *root){
    if(root==NULL) return;

    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}

void inorder(Node *root){
    if(root == NULL) return;

    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}

int main(){

    Node* root = createNode(1);

    root->right = createNode(4);
    root->left = createNode(7);
    root->right->right = createNode(9);
    root->right->left = createNode(6);
    root->left->right = createNode(3);

    printf("\nPre Order\n");
    preorder(root);

    printf("\nPost Order\n");
    postorder(root);

    printf("\nIn Order\n");
    inorder(root);
}
