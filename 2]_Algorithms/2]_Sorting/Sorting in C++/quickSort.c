#include <stdio.h>

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
    return 0;
}