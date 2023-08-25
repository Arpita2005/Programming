#include <stdio.h>
#include <stdlib.h>

// Define the structure for a term in the polynomial
struct Term {
    int coefficient;
    int exponent;
    struct Term* next;
};

// Function to create a new term
struct Term* createTerm(int coefficient, int exponent) {
    struct Term* newTerm = (struct Term*)malloc(sizeof(struct Term));
    newTerm->coefficient = coefficient;
    newTerm->exponent = exponent;
    newTerm->next = NULL;
    return newTerm;
}

// Function to insert a term into the polynomial in descending order of exponent
void insertTerm(struct Term** polynomial, int coefficient, int exponent) {
    struct Term* newTerm = createTerm(coefficient, exponent);
    
    if (*polynomial == NULL || exponent > (*polynomial)->exponent) {
        newTerm->next = *polynomial;
        *polynomial = newTerm;
    } else {
        struct Term* current = *polynomial;
        while (current->next != NULL && current->next->exponent >= exponent) {
            current = current->next;
        }
        newTerm->next = current->next;
        current->next = newTerm;
    }
}

// Function to display the polynomial expression
void displayPolynomial(struct Term* polynomial) {
    if (polynomial == NULL) {
        printf("Polynomial is empty.\n");
        return;
    }
    
    while (polynomial != NULL) {
        printf("(%dx^%d)", polynomial->coefficient, polynomial->exponent);
        if (polynomial->next != NULL) {
            printf(" + ");
        }
        polynomial = polynomial->next;
    }
    printf("\n");
}

// Function to free the memory used by the polynomial
void freePolynomial(struct Term* polynomial) {
    while (polynomial != NULL) {
        struct Term* temp = polynomial;
        polynomial = polynomial->next;
        free(temp);
    }
}

int main() {
    struct Term* polynomial = NULL;

    // Insert terms into the polynomial
    insertTerm(&polynomial, 3, 2);
    insertTerm(&polynomial, -4, 3);
    insertTerm(&polynomial, 5, 1);
    insertTerm(&polynomial, 2, 4);

    // Display the polynomial expression
    printf("Polynomial: ");
    displayPolynomial(polynomial);

    // Free the memory used by the polynomial
    freePolynomial(polynomial);

    return 0;
}
