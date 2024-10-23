#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

void insert(struct Node** poly, int coeff, int exp) {
    struct Node* newNode = createNode(coeff, exp);
    
    if (*poly == NULL) {
        *poly = newNode;
        return;
    }
    
    struct Node* current = *poly;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exp > poly2->exp) {
            insert(&result, poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } else if (poly1->exp < poly2->exp) {
            insert(&result, poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        } else {
            insert(&result, poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    
    while (poly1 != NULL) {
        insert(&result, poly1->coeff, poly1->exp);
        poly1 = poly1->next;
    }
    
    while (poly2 != NULL) {
        insert(&result, poly2->coeff, poly2->exp);
        poly2 = poly2->next;
    }
    
    return result;
}

void displayPolynomial(struct Node* poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }
    
    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->exp);
        poly = poly->next;
        if (poly != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

void freePolynomial(struct Node* poly) {
    struct Node* temp;
    while (poly != NULL) {
        temp = poly;
        poly = poly->next;
        free(temp);
    }
}

void readPolynomial(struct Node** poly) {
    int terms, coeff, exp;
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &terms);

    for (int i = 0; i < terms; i++) {
        printf("Enter coefficient and exponent for term %d (space-separated): ", i + 1);
        scanf("%d %d", &coeff, &exp);
        insert(poly, coeff, exp);
    }
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;
    
    printf("Enter the first polynomial:\n");
    readPolynomial(&poly1);
    
    printf("Enter the second polynomial:\n");
    readPolynomial(&poly2);
    
    printf("\nFirst polynomial: ");
    displayPolynomial(poly1);
    
    printf("Second polynomial: ");
    displayPolynomial(poly2);
    
    result = addPolynomials(poly1, poly2);
    
    printf("Resultant polynomial after addition: ");
    displayPolynomial(result);
    
    freePolynomial(poly1);
    freePolynomial(poly2);
    freePolynomial(result);
    
    return 0;
}
