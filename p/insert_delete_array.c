#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};
struct Array arr;
int *len = &arr.length;
void Display()
{
    printf("\nThe elements in the array are\n");
    for (int i = 0; i < *len; i++)
    {
        printf("%d\t", arr.A[i]);
    }
}

void insert(int index, int x)
{
    int i;
    for (i = *len; i > index; i--)
    {
        arr.A[i] = arr.A[i - 1];
    }
    arr.A[i] = x;
    (*len)++;
}

int deleteByIndex(int index)
{
    int x;
    if (index < *len && index > 0)
    {
        x = arr.A[index];
        for (int i = index; i < *len; i++)
        {
            arr.A[i] = arr.A[i + 1];
        }

        (*len)--;
    }
    return x;
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
    Display();
    insert(3, 99);
    Display();
    printf("\nEnter the index you want to delete\n");
    int x;
    scanf("%d", &x);
    printf("The element which was at index %d was %d", x, deleteByIndex(x));
    Display();
}