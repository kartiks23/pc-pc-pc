#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};
struct Array arr;

void Display()
{
    printf("\nThe elements in the array are\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.A[i]);
    }
}

int get(int x)
{
    if (x > 0 && x < arr.length)
        return arr.A[x];
    return -1;
}

void set(int index, int x)
{
    if (index > 0 && index < arr.length)
        arr.A[index] = x;
}

int max()
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int min()
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int sum()
{
    int n = 0, sum = 0;
    while (n != arr.length)
    {
        sum += arr.A[n];
        n++;
    }
    return sum;
}

int avg()
{
    int n = 0, sum = 0;
    while (n != arr.length)
    {
        sum += arr.A[n];
        n++;
    }
    return (float)(sum / arr.length);
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
    printf("\nEnter the index you want to get");
    int x;
    scanf("%d", &x);
    printf("\n%d", get(x));

    printf("\nEnter the index you want to set and value of that index\n");
    int index;
    scanf("%d %d", &index, &x);
    set(index, x);
    Display();
    printf("\nThe max of all the numbers in the array is %d", max());
    printf("\nThe min of all the numbers in the array is %d", min());
    printf("\nThe sum of all the numbers in the array is %d", sum());
    printf("\nThe average of all the numbers in the array is %d", avg());
}