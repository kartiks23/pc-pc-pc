#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[100];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.A[i]);
    }
}
struct Array merge(struct Array a, struct Array b)
{
    struct Array c;
    // c.A = (int *)malloc((a.length + b.length) * sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < a.length && j < b.length)
    {
        if (a.A[i] < b.A[j])
            c.A[k++] = a.A[i++];
        else
            c.A[k++] = b.A[j++];
    }
    for (; i < a.length; i++)
    {
        c.A[k++] = a.A[i];
    }

    for (; j < b.length; j++)
    {
        c.A[k++] = b.A[j];
    }
    return c;
}

int main()
{
    struct Array a = {{1, 2, 3, 6, 10}, 10, 5};
    struct Array b = {{2, 7, 9, 16, 100}, 10, 5};
    struct Array c = merge(a, b);
    c.length = a.length + b.length;
    Display(c);
}
