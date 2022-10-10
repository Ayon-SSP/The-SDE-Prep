#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;

void circularlist(struct node *ptr, int n)
{

    struct node *t, *last;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data of head Node\n");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    last = ptr;
    head = ptr;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data of %d Node of Linked List\n", i);
        scanf("%d", &t->data);
        t->next = NULL;
        last->next = t;
        last = t;
    }

    last->next = ptr;
}
void count(struct node *ptr)
{
    int count = 0;
    do
    {
        count++;
        ptr = ptr->next;
    } while (ptr != head);
    printf("Number of Nodes in LInked is %d \n", count);
}
void displaycircularlist(struct node *ptr)
{
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}
void insertcircularlist(struct node *ptr)
{
    int key;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    printf("Enter Position of At which you want to Enter A New Node:\n");
    scanf("%d", &key);
    printf("Enter data of New Node\n");
    scanf("%d", &temp->data);
    if (ptr == NULL)
    {
        ptr->next = ptr;
    }
    for (int i = 0; i < key - 1; i++)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}
int delete (struct node *ptr)
{
    int n;
    printf("Enter Link you want to delete from list\n");
    scanf("%d", &n);
    struct node *temp = NULL;
    if (n < 0)
    {
        return -1;
    }
    if (n == 1)
    {
        while (ptr->next != head)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr = NULL;
        free(ptr);
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {

            temp = ptr;
            ptr = ptr->next;
        }

        temp->next = ptr->next;
        ptr = NULL;
        free(ptr);
    }
}
int main()
{
    int n;
    printf("Enter No Nodes You Want create\n");
    scanf("%d", &n);
    circularlist(head, n);
    insertcircularlist(head);
    count(head);
    delete (head);
    displaycircularlist(head);
}
