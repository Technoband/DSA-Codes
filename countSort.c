#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    } 
    printf("\n");
}

int maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int *A, int n)
{
    int i,j;
    //Find the maximum element in A
    int max = maximum(A,n);

    //create the count Array
    int* count=(int *)malloc(sizeof(int));

    //Initialize the array to element 0
    for (int i = 0; i < max+1; i++)
    {
        count[i]=0;
    }

    //Increment the corresponding index in the count array
    for (int i = 0; i < n; i++)
    {
        count[A[i]]=count[A[i]]+1;

    }

    i=0;// counter for count array
    j=0;//counter for the given array

while (i<=max)
{
    if (count[i]>0)
    {
        A[j]=i;
        count[i]=count[i]-1;
        j++;
    }
     else{
            i++;
        }
    
}

    
    
}
int main()
{
    int A[] = {9, 14, 4, 6, 3, 7, 8, 7};
    int n = 8;

    printArray(A, n);
    countSort(A, n);
    printArray(A, n);
    return 0;
}