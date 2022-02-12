#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};

struct Array arr;
// int *len = &arr.length;

void Display()
{

    printf("\nThe elements in the array are\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.A[i]);
    }
}

int linearSearch(int x)
{
    // bool a = false;
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (arr.A[i] == x)
            return i;
    }
    return -1;
}

int main()
{
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
    Display();
    printf("\nThe element was found at index %d", linearSearch(x));
}