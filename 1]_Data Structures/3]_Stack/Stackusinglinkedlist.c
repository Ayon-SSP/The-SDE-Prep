#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head=NULL;

void create()
{   int n;
    printf("Enter number of element to enter in stack\n");
    scanf("%d",&n);
    struct node *temp, *last;
    head = malloc(sizeof(struct node));
    printf("ENTER DATA OF HEAD NODE\n");
    scanf("%d", &head->data);
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        temp = malloc(sizeof(struct node));
        printf("Enter data of %d Node\n", i);
        scanf("%d", &temp->data);
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void push(int x)
{

    struct node *t = malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("Stack overflow\n");
    }
    else
    {
        t->data = x;
        t->next = head;
        head = t;
        t = NULL;
        free(t);
    }
}
int pop()
{
    int x = -1;
    if (head == NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        x = head->data;
        struct node *p;
        p = head;
        head = head->next;
        p = NULL;
    }
    return x;
}
void isfull()
{
    struct node *t = malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("Stack is full\n");
    }
    else
        printf("Stack is not full\n");
}
void isempty()
{
    if (head == NULL)
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
}
int main()

{ int x = -1;
create();
printf("\n");
    do
    {
        printf("0.To exit function .\n");
        printf("1.To push element in stack press 1 else 0 .\n");
        printf("2.To pop Data from stack press 2 .\n");
        printf("3.is full .\n");
        printf("4.is empty .\n");
        printf("5.To display Data of stack .\n");
        
        scanf("%d", &x);

        if (x == 1)
        {
            int t;
            printf("Enter Data to push .");
            scanf("%d", &t);
            push(t);
        }
        if(x==2){
            pop();
        }
        if(x==3){
            isfull();
        }
        if(x==4){
            isempty();
        }
        if(x==5){
            display(head);
        }
        printf("\n");
    } while(x);
    return 0;
}