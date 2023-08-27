#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// void bubbleSortAdaptive(int *A, int n){
//     int temp;
//     int isSorted = 0;
//     for (int i = 0; i < n-1; i++) // For number of pass
//     {
//         printf("Working on pass number %d\n", i+1);
//         isSorted = 1;
//         for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
//         {
//             if(A[j]>A[j+1]){
//                 temp = A[j];
//                 A[j] = A[j+1];
//                 A[j+1] = temp;
//                 isSorted = 0;
//             }
//         } 
//         if(isSorted){
//             return;
//         }
//     } 
// }

// void bubbleSortAdaptive(int *A, int n)
// {
//     int temp;
//     int isSorted = 0;
//     for (int i = 0; i < n - 1; i++) // for number of passes
//     {
//         printf("Working of pass no. %d\n", i + 1);
//         isSorted = 1;
//         for (int j = 0; j < n - 1 - i; j++) // for the comparison in each pass
//         {
//             if (A[j] > A[j + 1])
//             {
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//                 isSorted = 0;
//             }
//             if (isSorted)
//             {
//                 return;
//             }
//         }
//     }
// }
void bubbleSort(int *A, int n){
    int temp;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1); 
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }  
    } 
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    // int A[]={1,2,3,4,5,6};
    int n = 6;
    printArray(A, n); // printing the array before  sorting
    bubbleSort(A, n);
    printArray(A, n); // printing the array after  sorting

    return 0;
}