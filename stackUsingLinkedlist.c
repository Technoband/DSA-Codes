#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void linkedListTraversal(struct Node *top)
{
    while (top != NULL)
    {
        printf("Element = %d\n", top->data);
        top = top->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        //  struct Node *n=top;
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack Underflow");
    }
    else
    {
        struct Node *p = *top;
        *top = (*top)->next;
        int x = p->data;
        free(p);
        return x;
        // printf("Element = %d", p);
    }
}

int peek(int pos)
{
    struct Node *p = top;
    for (int i = 0; (i < pos - 1 && p != NULL); i++)
    {
        p = p->next;
    }
    if (p != NULL)
    {
        return p->data;
    }
    else
    {
        return -1;
    }
}
int main()
{
    // printf("Linked list before pushing\n");

    top = push(top, 55);
    top = push(top, 54);
    top = push(top, 56);
    top = push(top, 57);

    linkedListTraversal(top);
  int element = pop(&top);
    printf("The popped element is %d\n", element);
    for (int i =1 ; i < 5; i++)
    {
        printf("Value at position %d is : %d\n ",i,peek(1));
    }

    // printf("Linked list after pushing\n");
    linkedListTraversal(top);

    return 0;
}