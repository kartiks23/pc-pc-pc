#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

struct Array arr;

int binaryUsingRecursion(int l, int h, int x)
{
    int mid = (l + h) / 2;
    if (arr.A[mid] == x)
        return mid;
    else if (arr.A[mid] > x)
        return binaryUsingRecursion(l, mid - 1, x);
    else if (arr.A[mid] < x)
        return binaryUsingRecursion(mid + 1, h, x);
    return -1;
}

int binarySearch(int h, int x)
{
    int l = 0;

    while (l <= h)

    {
        int mid = (l + h) / 2;

        if (arr.A[mid] == x)
            return mid;
        else if (arr.A[mid] > x)
            h = mid - 1;
        else if (arr.A[mid] < x)
            l = mid + 1;
    }
    return -1;
}
int main()
{
    // int n;
    printf("Enter the size of the array ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    // arr.length =0;
    printf("\nEnter the number of elements you want to enter ");
    scanf("%d", &arr.length);
    printf("Enter the elements now\n");
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    int x;
    printf("\nEnter the element you want to search ");
    scanf("%d", &x);
    printf("The element was found at %d index, and not found if index is -1", binarySearch(arr.length - 1, x));
    printf("\nThe element was found at %d index, and not found if index is -1", binaryUsingRecursion(0, arr.length - 1, x));
}
