#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data= data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int isBST(struct Node* root){
    static struct Node* prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct Node* search(struct Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

int main(){
    struct Node *p = createNode(5);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(1);
    struct Node *p4 = createNode(4);

    p->left = p1; 
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    
    if(isBST(p)){
        printf("it is a BST\n");
    }
    else{
        printf("it is not a BST\n");
    }
    
    struct Node* n = search(p,6);
    if(n!=NULL){
        printf("Found: %d",n->data);
    }
    else{
    printf("Element not found");
    }




    
    return 0;
}