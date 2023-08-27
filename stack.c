#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};


int isEmpty(struct stack *ptr)
{
   if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
   if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push( struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow! cannot push %d element inside it\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]= val;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack underflow!");
        // return 0;
    }
    else
    {
        //int val= ptr->arr[ptr->top];
        // ptr->top--;
        //return val;
        return ptr->arr[ptr->top];
        ptr->top--;
    }
    return 0;
}

int peek ( struct stack *sp, int i)
{
    if(sp->top-i+1<0)
    {
        printf("NOt a valid position!\n");
    }
    else
    {
        return sp->arr[sp->top-i+1];
    }
} 

int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

int stackBottom(struct stack *sp)
{
    return sp->arr[0];
}
int main()
{
    struct stack *sp;
    sp->size= 10;
    sp->top= -1;
    sp->arr= (int *)malloc(10* sizeof(int));
    // printf("The stack is created \n");
    // printf("Before pushing, Full: %d\n", isFull(sp));
    // printf("Before pushing, Empty: %d\n", isEmpty(sp));
    push(sp, 1);
    push(sp, 2);
    push(sp, 32);
    push(sp, 43);
    push(sp, 65);
    push(sp, 98);
    push(sp, 89);
    push(sp, 56);
    push(sp, 16);
    push(sp, 23);
    // push(sp, 28);
    printf("The poped number is %d\n ",pop(sp));
    // printing value s from stack
    // for (int j = 1; j<= sp->top+1; j++)
    // {
    //     printf("The value at position %d is %d \n",j,peek(sp,j));
    // }
    // //     printf("The top most value of this stack is %d\n", stackTop(sp));
    // printf("The bottom most value of this stack is %d\n", stackBottom(sp));
    

return 0;
}