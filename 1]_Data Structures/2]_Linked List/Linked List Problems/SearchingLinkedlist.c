#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} * first;

void linkedlist(int arr[], int n)
{
    struct node *current, *last;
    first = malloc(sizeof(struct node));
    first->data = arr[0];
    first->link = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        current = malloc(sizeof(struct node));
        current->data = arr[i];
        current->link = NULL;
        last->link = current;
        last = current;
    }
}
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->link;
    }
}
int search(struct node *ptr, int x)
{
    struct node *p = ptr;
    int count = 1;
    while (p != NULL)
    {
        if (x == p->data)
        {
            return count;
        }

        p = p->link;
        count++;
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter Number Of nodes\n");
    scanf("%d", &n);
    int arr[n];

    printf("Creating linkded list\n");
    printf("Enter elements of Linked List\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    linkedlist(arr, n);
    display(first);

    int key;
    printf("\nEnter Key you Want to Search\n");
    scanf("%d", &key);
    int count=search(first, key);
    if (count !=-1)
    {
        printf("key is found at %d\n", count);
    }
    else
        printf("Key not Found\n");
    return 0;
}