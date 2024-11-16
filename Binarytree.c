#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* Create() {
    int x;
    struct node *newnode;
    
    printf("Enter data (-1 to stop): ");
    scanf("%d", &x);
    
    if(x == -1) {
        return NULL;
    }
    
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    
    newnode->data = x;
    
    printf("Enter the left child of %d: ", x);
    newnode->left = Create();
    
    printf("Enter the right child of %d: ", x);
    newnode->right = Create();
    
    return newnode;
}

void preorder(struct node *root) {
    if(root == NULL) {
        return;
    }
    printf("%d ", root->data); 
    preorder(root->left);
    preorder(root->right);
}

void Inorder(struct node *root) {
    if(root == NULL) {
        return;
    }
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}

void Postorder(struct node *root) {
    if(root == NULL) {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    struct node *root = NULL;
    root = Create();
    
    printf("\nPreorder traversal: ");
    preorder(root);
    
    printf("\nInorder traversal: ");
    Inorder(root);
    
    printf("\nPostorder traversal: ");
    Postorder(root);
    
    return 0;
}
