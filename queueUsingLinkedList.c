#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *f = NULL;
struct Node *r = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is Full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }

    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
        return val;
    }
}
int main()
{

    enqueue(34);
    enqueue(32);
    enqueue(36);
    enqueue(78);
    linkedListTraversal(f);
    printf("Dequeued element is %d\n", dequeue());
    printf("Dequeued element is %d\n", dequeue());
    linkedListTraversal(f);

    return 0;
}