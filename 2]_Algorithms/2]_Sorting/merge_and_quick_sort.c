#include <stdio.h>

// QUICK SORT

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void qsort2(int *a, int n)
{
    if (n == 0)
    {
        printf("Array is empty.");
        return;
    }
    if (n < 2)
    {
        return;
    }
    int pivot, left, right, leftLen, rightLen, *leftArr, *rightArr;
    pivot = *(a);
    left = 1;
    for (int right = 1; right <= n; right++)
    {
        if (*(a + right) < pivot)
        {
            swap((a + left), (a + right));
            left++;
        }
    }
    swap(a, (a + left - 1));
    leftLen = left - 1;
    leftArr = a;
    rightLen = n - left;
    rightArr = (a + left);
    qsort2(rightArr, rightLen);
    qsort2(leftArr, leftLen);
};

// MERGE SORT

void msort(int *a, int n)
{
    if (n == 0)
    {
        printf("Array is empty.");
        return;
    }
    if (n < 2)
    {
        return;
    }
    int start, end, curr, middle, *temp;
    middle = n / 2;
    msort(a, middle);
    msort(a + middle, n - middle);
    temp = malloc(n * sizeof(int));
    for (start = 0, end = middle, curr = 0; curr < n; curr++)
    {
        if (start == middle)
        {
            temp[curr] = a[end++];
        }
        else if (end == n)
        {
            temp[curr] = a[start++];
        }
        else if (a[end] < a[start])
        {
            temp[curr] = a[end++];
        }
        else
        {
            temp[curr] = a[start++];
        }
    }
    for (start = 0; start < n; start++)
    {
        a[start] = temp[start];
    }
    free(temp);
};

int main(void)
{
    int arr1[5] = {2, 4, 1, 5, 3};
    printf("Before Quick Sort:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr1[i]);
    }
    qsort2(arr1, 5);
    printf("\nAfter Quick Sort:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr1[i]);
    }

    printf("\nBefore Merge Sort:\n");
    int arr2[5] = {5, 4, 1, 2, 3};
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr2[i]);
    }
    msort(arr2, 5);
    printf("\nAfter Merge Sort:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr2[i]);
    }
    printf("\n");
    return 0;
}