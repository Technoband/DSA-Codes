#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocating memory to all nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // linking first node to second node
    head->data = 7;
    head->next = second;

    // linking first node to second node
    second->data = 11;
    second->next = third;
    // linking first node to second node
    third->data = 33;
    third->next = fourth;
    // linking first node to second node
    fourth->data = 44;
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}