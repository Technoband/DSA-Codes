#include<stdio.h>

void display(int arr[], int n)
{
    //code for Traversal 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if(size>=capacity)
    {
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    
    }
    arr[index]=element;
    return 1;
    
}


int main()
{
int arr[100]={7,12,33,44,88};
int size=5, element=35, index=2;
display(arr,size);
indInsertion(arr,size, element,100,index);
size+=1;
display(arr,size);
return 0;
}