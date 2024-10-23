#include <stdio.h>
#include <stdlib.h>

int MAX, queue[100], rear = -1, front = -1;

int enqueue() {
    int m;
    if ((rear + 1) % MAX == front) {
        printf("The Queue is full\n");
        return -1;
        }
    if(front ==-1 && rear ==-1)
    {
    front=rear=0;
     printf("Enter the element to be inserted");
    scanf("%d",&m);
    queue[rear]=m;
    }
    else
    {
    printf("Enter the element to be inserted");
    scanf("%d",&m);
    rear=(rear+1)%MAX;
    queue[rear]=m;
    }
    printf("\n");
}

void dequeue() {
    if (front == -1) {
        printf("The queue is empty\n");
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

void display() {
    if (front == -1) {
        printf("The Queue is empty\n");
    } else {
        printf("The elements in the Queue are:\n");
        int i = front;
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d",queue[rear]);
    }
    printf("\n");
}

int main() {
    char a;
    printf("***Circular Queue Operation***\n");
    printf("Enter the size of the array (max 100): ");
    scanf("%d", &MAX);
    
    if (MAX <= 0 || MAX > 100) {
        printf("Invalid size. Please enter a size between 1 and 100.\n");
        return 1; // Exit with an error
    }
    
    do {
        int n;
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n");
        printf("Enter an option: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid input. Please choose a valid option.\n");
                break;
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %s", &a);
    } while (a == 'y' || a == 'Y');

    return 0;
}

