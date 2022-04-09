#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[13];
    int size;
    int length;
};
int x = 0, y = 0, z = 0;
void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.A[i]);
    }
}
struct Array un(struct Array a, struct Array b)
{
    struct Array c;
    int i = 0, j = 0, k = 0;
    while (i < a.length && j < b.length)
    {
        if (a.A[i] < b.A[j])
        {
            c.A[k++] = a.A[i++];
            x++;
        }
        else if (a.A[i] == b.A[j])
        {
            c.A[k++] = a.A[i++];
            j++;
            x++;
        }
        else
        {
            c.A[k++] = b.A[j++];
            x++;
        }
    }
    for (; i < a.length; i++)
    {
        c.A[k++] = a.A[i];
        x++;
    }

    for (; j < b.length; j++)
    {
        c.A[k++] = b.A[j];
        x++;
    }
    return c;
}
struct Array del(struct Array a, struct Array b)
{
    struct Array c;
    int i = 0, j = 0, k = 0;
    while (i < a.length && j < b.length)
    {
        if (a.A[i] < b.A[j])
        {
            z++;
            c.A[k++] = a.A[i++];
        }
        else if (a.A[i] == b.A[j])
        {
            j++;
            i++;
        }
        else
        {
            z++;
            c.A[k++] = b.A[j++];
        }
    }
    for (; i < a.length; i++)
        c.A[k++] = a.A[i];
    return c;
}
struct Array in(struct Array a, struct Array b)
{
    struct Array c;
    int i = 0, j = 0, k = 0;
    while (i < a.length && j < b.length)
    {
        if (a.A[i] < b.A[j])
            i++;

        else if (a.A[i] == b.A[j])
        {
            c.A[k++] = a.A[i++];
            j++;
            y++;
        }
        else
            j++;
    }
    return c;
}
int main()
{
    struct Array a = {{4, 9, 12, 29, 45}, 10, 5};
    struct Array b = {{3, 5, 9, 19, 44, 45, 49, 70}, 10, 8};
    struct Array c = un(a, b);
    struct Array d = in(a, b);
    struct Array e = del(a, b);
    c.length = x;
    d.length = y;
    e.length = z;
    display(c);
    printf("\n");
    display(d);
    printf("\n");
    display(e);
}