#include<stdio.h>
int main()
{
    int n;
    int A[5];

// printf("Enter the no.of elements in array");
//     scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d\n", i+1);
        scanf("%d", &A[i]);
    }
    
    
return 0;
}