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
void recursivereverse(struct node *ptr)
{

    if (ptr == NULL)
    {
        return;
    }
    else
    {
        recursivereverse(ptr->next);
        printf("%d ", ptr->data);
    }
}
int main()
{
    int n;
     create();
     printf("Reversing linked list\n");
     recursivereverse(first);
    //  Display(first);
     return 0;
}
