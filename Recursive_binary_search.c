#include <stdio.h>

int R_BinarySearch(int a[], int low, int high, int key)
{
    int mid;
    if (low == high)
    {
        if (a[low] == key)
            return low;
        else
            return -1;
    }
    else
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            return mid;
        }
         if (key > a[mid])
        {
            return R_BinarySearch(a, mid + 1, high, key);
        }
        else
        {
            return R_BinarySearch(a, low, mid - 1, key);
        }
    }
    return 0;
}

int main()
{
    // For sorted array Binary search
    int size, element, index;
    printf("Enter the no. of elements in sorted array\n");
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element\n", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter an element to search\n");
    scanf("%d", &element);
    index = R_BinarySearch(a, 0, size - 1, element);

    printf("The element %d was found at index %d \n", element, index);
    return 0;
}