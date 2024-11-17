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
    
    int choice;
    do {
        printf("\nChoose a traversal method:\n");
        printf("1. Preorder\n");
        printf("2. Inorder\n");
        printf("3. Postorder\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nPreorder traversal: ");
                preorder(root);
                break;
            case 2:
                printf("\nInorder traversal: ");
                Inorder(root);
                break;
            case 3:
                printf("\nPostorder traversal: ");
                Postorder(root);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);
    
    return 0;
}
