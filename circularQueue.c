#include<stdio.h>
#include<stdlib.h>
struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};


int isEmpty(struct circularQueue *q){
    if(q->r==q->f)
    {
        return 1;
    }
        return 0;
    
}

int isFull(struct circularQueue *q){
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
       return 0;
    
}

int enqueue(struct circularQueue *q, int val)
{
    if(isFull(q))
    {
        printf("The queue is full\n");

    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("Enqueued element:%d\n", val);
    }
}

int dequeue(struct circularQueue *q)
{   int a=-1;
    if(isEmpty(q))
    {
      printf("The queue is empty\n");

    }
    else
    {
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
} 
void display(struct circularQueue *q)
{
    for (int i = 1; i <q->size; i++)
    {
        printf("%d\n", q->arr[i]);
    }
}

int main()
{
    struct circularQueue q;
    q.size =4;
    q.f=q.r=0;
    q.arr=(int *) malloc(q.size * sizeof(int));
    printf("The Queue is created succesfully\n");
    enqueue(&q, 12);
    enqueue(&q, 14);
    // enqueue(&q, 22);
    //  enqueue(&q, 3);

     //printf("The element %d is deleted successfully\n", dequeue(&q));
     //printf("The element %d is deleted successfully\n", dequeue(&q));
     //printf("The element %d is deleted successfully\n", dequeue(&q));
     //printf("The element %d is deleted successfully\n", dequeue(&q));
    //  dequeue(&q);
    //  dequeue(&q);
    //  dequeue(&q);
    //  enqueue(&q, 16);
    //  enqueue(&q, 15);

    // if(isFull(&q))
    // {
    //  printf("The queue is full\n");
    // }
    display(&q);
    
    

return 0;
}