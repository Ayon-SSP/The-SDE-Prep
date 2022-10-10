// Display a Linked List
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node
{
    int data;
    struct node *next;
} * first;

void create()
{
    int n;
    printf("Enter number of links to create.\n");
    scanf("%d", &n);
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    printf("Enter head Element of Linked List\n");
    scanf("%d", &first->data);
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data in %d Node of Linkde List\n", i);
        scanf("%d", &t->data);
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    // printf("\nNumber Of nodes In Linked List %d\n", count);
}

void sorted_linkedlsit(struct node *ptr, int n)
{
    struct node *t, *q;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = n;
    t->next = NULL;
    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (ptr != NULL && ptr->data < n)
        {
            q = ptr;
            ptr = ptr->next;
        }
    }
}
int main()
{
    int n;
     create();
     int v;
     printf("Enter link number till we have to sort.\n");
     scanf("%d",&v);
     printf("Sorting Elements in list\n");
     sorted_linkedlsit(first,n);
     Display(first);
}