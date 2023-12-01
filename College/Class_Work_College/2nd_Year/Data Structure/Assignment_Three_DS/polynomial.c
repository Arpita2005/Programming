#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Term
{
    int coef;
    int exp;
    struct Term *next;
};

struct Term *newTerm(int coef, int exp)
{
    struct Term *term = (struct Term *)malloc(sizeof(struct Term));
    term->coef = coef;
    term->exp = exp;
    term->next = NULL;
    return term;
}

void insertTerm(struct Term **poly, int coef, int exp)
{
    struct Term *term = newTerm(coef, exp);

    if (*poly == NULL || exp > (*poly)->exp)
    {
        term->next = *poly;
        *poly = term;
    }
    else
    {
        struct Term *cur = *poly;
        while (cur->next != NULL && cur->next->exp >= exp)
        {
            cur = cur->next;
        }
        term->next = cur->next;
        cur->next = term;
    }
}

void displayPolynomial(struct Term *poly)
{
    if (poly == NULL)
    {
        printf("Polynomial is empty.\n");
        return;
    }

    while (poly != NULL)
    {
        printf("(%dx^%d)", poly->coef, poly->exp);
        if (poly->next != NULL)
        {
            printf(" + ");
        }
        poly = poly->next;
    }
    printf("\n");
}

void freePolynomial(struct Term *poly)
{
    while (poly != NULL)
    {
        struct Term *temp = poly;
        poly = poly->next;
        free(temp);
    }
}

int main()
{
    struct Term *poly = NULL;
    int choice, coef, exp;

    while (1)
    {
        printf("Menu:\n");
        printf("1. Insert term\n");
        printf("2. Display polynomial\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter coefficient and exponent: ");
            scanf("%d %d", &coef, &exp);
            insertTerm(&poly, coef, exp);
            printf("Term inserted.\n");
            break;
        case 2:
            printf("Polynomial: ");
            displayPolynomial(poly);
            break;
        case 3:
            freePolynomial(poly);
            printf("Exiting.\n");
            exit(0);
        default:
            printf("Invalid choice. Retry.\n");
        }
    }
    getch();
    return 0;
}
