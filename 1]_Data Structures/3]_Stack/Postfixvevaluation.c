#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
int isFull(node *top)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        return 1;
    }
    return 0;
}
node *push(node *head, int n)
{
    if (isFull(head))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->data = n;
        // printf("%d is pushed inside the stack.\n",n);
        temp->next = head;
        head = temp;
        return head;
    }
}
int isEmpty(node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    return 0;
}
node *pop(node *first)
{
    if (isEmpty(first))
    {
        printf("The stack is empty.\n");
    }
    else
    {
        // printf("%d is popped out.\n",first->data);
        node *temp = first;
        first = first->next;
        int x = temp->data;
        // temp->next = NULL;
        free(temp);
        return first;
    }
}
int Top(node *first)
{
    if (first == NULL)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        return first->data;
    }
}
void printStack(node *first)
{
    printf("The elements in the stack are\n");
    while (first != NULL)
    {
        printf("%d\n", first->data);
        first = first->next;
    }
}
int main()
{
    node *st = NULL;
    char str[] = "32*2/5*7+9";
    for (int i = 0; i <= strlen(str) - 1; i++)
    {
        if (str[i] <= '9' && str[i] >= '0')
        {
            st = push(st, str[i] - '0');
        }
        else
        {
            int op2 = Top(st);
            st = pop(st);
            int op1 = Top(st);
            st = pop(st);
            switch (str[i])
            {
            case '+':
                /* code */
                st = push(st, op1 + op2);
                break;
            case '-':
                st = push(st, op1 - op2);
                break;
            case '*':
                st = push(st, op1 * op2);
                break;
            case '/':
                st = push(st, op1 / op2);
                break;
            default:
                break;
            }
        }
    }
    printf("Evaluated value is %d.\n", Top(st));
    return 0;
}