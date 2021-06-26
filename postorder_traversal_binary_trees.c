#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p; 
}

void postorder(struct Node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}


int main(){
    struct Node* p = createNode(4);
    struct Node* p1 = createNode(1);
    struct Node* p2 = createNode(6);
    struct Node* p3 = createNode(5);
    struct Node* p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    postorder(p);
    
    return 0;
}