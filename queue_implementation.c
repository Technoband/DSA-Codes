#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};



int isEmpty(struct queue *q){
    if(q->r==q->f)
    {
        printf("The queue is empty\n");
    }
        return 0;
    
}

int isFull(struct queue *q){
    if(q->r==q->size-1)
    {
        printf("The queue is full\n");
    }
       return 0;
    
}

void display(struct queue *q)
{
    for (int i = 1; i <q->size; i++)
    {
        printf("%d\n", q->arr[i]);
    }
}

int enqueue(struct queue *q, int val)
{
    if(isFull(q))
    {
        return 0;
    }
    else
    {
        q->r++;
        q->arr[q->r]=val;
    }
}

int dequeue(struct queue *q)
{   int a=-1;
    if(isEmpty(q))
    {
        return 0;
    }
    else
    {
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}


int main()
{
    struct queue q;
    q.size =100;
    q.f=q.r=-1;
    q.arr=(int *) malloc(q.size * sizeof(int));
   printf("The Queue is created succesfully\n");
    enqueue(&q, 12);
    enqueue(&q, 14);
    display(&q);
   // printf("The element %d is deleted successfully\n", dequeue(&q));
    //printf("The element %d is deleted successfully\n", dequeue(&q));
    // dequeue(&q);
return 0;
}