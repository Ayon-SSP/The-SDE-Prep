#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node
{
    int data;
    struct node *next;
} * first;

void create(int a[], int n)
{
    int i;                    // to keep recoṇd of array
    struct node *temp, *last; //
    first = (struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void recursivedisplay(struct node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        recursivedisplay(p->next);
    }
}
int max(struct node *p)
{
    int max = INT_MIN;
    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int search(struct node *ptr, int key)
{
    struct node *p = ptr;
    int count = 1;
    while (p != NULL)
    {
        if (key == p->data)
        {
            return count;
        }
        p = p->next;
        count++;
    }
    return -1;
}
// insert at top in list using stack;
void pushinlist(int x)
{
    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL)
        printf("Stack OverFlow\n");
    else
    {
        temp->data = x;
        temp->next = first;
        first = temp;
    }
}
// delete node using stack and display its data
int popinlist()
{
    int x = -1;
    struct node *p=first;
    if (p == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        p = first;
        first = first->next;
        x = p->data;
        free(p);
    }
    return x;
}
// peak in linked list using stack
int peeklist(int pos)
{
    struct node *p = first;
    for (int i = 0; p != NULL && i < pos - 1; i++)
    {
        p = p->next;
    }
    if (p != NULL)
    {
        return p->data;
    }
    else
        return -1;
}

int isempty()
{
    return first ? 0 : 1;
}
int isfull()
{
    struct node *t = malloc(sizeof(struct node));
    int r = t ? 1 : 0;
    free(t);
    return r;
}
int main()
{
    int n;
    printf("Enter size of Arrya\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    create(arr, n);
    // recursivedisplay(first);
    printf("Data of Linked list is \n");
    display(first);

    // printf("\nMax Element in Linked list is %d", max(first));
    // int key;
    // printf("Enter Element you want to Search in Linked LIst\n");
    // scanf("%d", &key);
    // if (search(first, key) != -1)
    // {
    //     printf("\nElement found At Index %d\n", search(first, key));
    // }
    // else
    //     printf("\nElement not found\n");
    printf("\n%d ", peeklist(3));
    isfull;
}