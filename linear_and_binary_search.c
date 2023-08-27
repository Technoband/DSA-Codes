#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    printf("the element not found");
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Keep searching until low<=high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
            ;
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // Unsorted array for linear search
    // int arr[] = {1,2,3,55,64, 7, 9,44,66};
    // int size = sizeof(arr)/sizeof(int);
    // int element = 64;
    // int searchIndex = linearSearch( arr, size, element);
    // printf("The element %d was found at index %d \n", element, searchIndex);

    // For sorted array Binary search
    int arr[] = {1, 23, 34, 55, 64, 76, 99, 444, 676};
    int size = sizeof(arr) / sizeof(int);
    int element = 23;
    int index = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, index);
    return 0;
}