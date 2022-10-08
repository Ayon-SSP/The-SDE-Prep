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

        node *temp = first;
        first = first->next;
        int x = temp->data;
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
    char str[] = "(a+b)+((a-b))";
    int flag = 1;
    for (int i = 0; i <= strlen(str) - 1; i++)
    {
        if (str[i] == '(')
        {
            st = push(st, '(');
        }
        else if (str[i] == ')')
        {
            if (!isEmpty(st) && Top(st) == '(')
            {
                if (!isEmpty(st))
                {
                    st = pop(st);
                }
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag && isEmpty(st))
    {
        printf("The expression is correctly parenthesized.\n");
    }
    else
    {
        printf("The expression is not correctly parenthesized.\n");
    }
    return 0;
}
