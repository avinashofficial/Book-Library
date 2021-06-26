#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* p = (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}


int main(){
    // //First Node
    // struct Node *p;
    // p = (struct Node*)malloc(sizeof(struct node));
    // p->data = 2;
    // p->left = NULL;
    // p->right = NULL;

    // struct Node *p1 = (struct Node*)malloc(sizeof(struct Node));
    // p1->data = 1;
    // p1->left=NULL;
    // p1->right = NULL;

    // struct NOde* p2 = (struct Node*)malloc(sizeof(struct Node));
    // p2->data = 4;
    // p2->left = NULL;
    // p2->right = NULL;

    // //LINKING the nodes
    // p->left = p1;
    // p->right = p2;
    struct Node* p = createNode(1);
    struct Node* p1 = createNode(20);
    struct Node* p2 = createNode(3);

    p->left = p1;
    p->right = p2;

    return 0;
}