
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *first = NULL;
void create(int n)
{
    struct Node *t, *last;
    int i;
    first = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data of head node\n");

    scanf("%d", &first->data);
    first->prev = first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data of %d node \n", i);

        scanf("%d", t->data);
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int Length(struct Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}
void Insert(struct Node *p)
{
    struct Node *t;
    int index, x;
    printf("Enter index at which you want to neter data\n");
    scanf("%d", &index);
    printf("Enter data to be inserted\n");
    scanf("%d", &x);
    int i;
    if (index < 0 || index > Length(p))
        return;
    if (index == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->prev = p;
        t->next = p->next;
        if (p->next)
            p->next->prev = t;
        p->next = t;
    }
}
int Delete(struct Node *p)
{
    // struct Node *q;
    int index;
    printf("Enter index to be deleted\n");
    scanf("%d", &index);
    int x = -1, i;
    if (index < 1 || index > Length(p))
        return -1;
    if (index == 1)
    {
        first = first->next;
        if (first)
            first->prev = NULL;
        x = p->data;
        free(p);
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
        x = p->data;
        free(p);
    }
    return x;
}
void Reverse(struct Node *p)
{
    struct Node *temp;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if (p != NULL && p->next == NULL)
            first = p;
    }
}
void deleteall()
{
    struct Node *t, *s;
    printf("Deleting all elements\n");
    while (first->next != NULL)
    {
        t = first;
        first = first->next;
        t = NULL;
        free(t);
    }
}
int main()
{
    int n;
    printf("Enter noumber of Element to enter in linked list\n");
    scanf("%d", &n);
    create(n);
    Insert(first);
    Delete(first);
    Reverse(first);
    deleteall();
    Display(first);
    return 0;
}