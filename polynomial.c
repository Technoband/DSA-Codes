#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node
{
    int coeff;
    int pow;
    struct Node *next;
};

struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;

void create(struct Node *p)
{
    char ch;
    do
    {
        printf("Enter coefficient:\n");
        scanf("%d", &p->coeff);
        printf("Enter power:\n");
        scanf("%d", &p->pow);
        struct Node *polynomial = (struct Node *)malloc(sizeof(struct Node));
        polynomial->next = NULL;
        p->next = polynomial;
        p = polynomial;
        printf("CONTINUE(Y/N)\n");
        ch=getch();

    } while (ch == 'y' || ch == 'Y');
}

void show(struct Node *p)
{
    while (p->next != NULL)
    {
        printf("%dx^%d", p->coeff, p->pow);
        p = p->next;
        if (p->next != NULL)
        {
            printf("+");
        }
    }
}
void polyAdd(struct Node *poly1, struct Node *poly2, struct Node *poly)
{
    while (poly1->next && poly2->next)
    {
        if (poly1->pow > poly2->pow)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow)

        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly->next = NULL;
        }
        poly->next = (struct Node *)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
    while (poly1->next || poly2->next)
    {
        if (poly1->next)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if (poly2->next)
        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        poly->next = (struct Node *)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
}
int main()
{
    char ch;
    do
    {
        poly1 = (struct Node *)malloc(sizeof(struct Node));
        poly2 = (struct Node *)malloc(sizeof(struct Node));
        poly = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter first Equation:\n");
        create(poly1);
        printf("Enter second Equation:\n");
        create(poly2);
        printf(" \nfirst Equation:\n");
        show(poly1);

        printf(" \nsecond Equation:\n");
        show(poly2);
        polyAdd(poly1, poly2, poly);
        printf("\nAdded polynomial\n");
        show(poly);
       // printf("\nAdd two more numbers:");
        ch = getch();
    } while (ch == 'y' || ch == 'Y');

    return 0;
}