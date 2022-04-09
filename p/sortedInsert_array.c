#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Array
{
    int *A;
    int size;
    int length;
};
struct Array arr;

void Display()
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.A[i]);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void LR(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}
void sort()
{
    bool a = false;
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] < arr.A[i + 1])
            a = true;
    }

    if (a)
        printf("\nThe array is sorted\n");
    else
    {
        printf("\nThe array wasn't sorted\n");
        exit(0);
    }
}

void sortedInsert(int x)
{
    int i;
    for (i = arr.length; arr.A[i - 1] > x; i--)
    {
        arr.A[i] = arr.A[i - 1];
    }
    arr.A[i] = x;
    arr.length++;
}

int main()
{
    printf("Enter the size of the array\t");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    printf("\nEnter the length of the array\n");
    scanf("%d", &arr.length);
    printf("\nEnter the elements you want to insert in the array\n");
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    Display();
    LR(&arr);
    Display();
    // sort();
    // printf("Enter the element you want to insert");
    // int x;
    // scanf("%d", &x);
    // sortedInsert(x);
    // Display();
}
