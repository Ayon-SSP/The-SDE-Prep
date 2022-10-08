#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    char data;
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
node *push(node *head, char ch)
{
    if (isFull(head))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->data = ch;
        temp->next = head;
        head = temp;
        // top = head;
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
char Top(node *first)
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
        printf("%c\n", first->data);
        first = first->next;
    }
}
int main()
{
    node *first = NULL;
    char str[20] = "naman";
    for (int i = 0; i < strlen(str); i++)
    {
        first = push(first, str[i]);
    }
    int i = 0;
    while (!isEmpty(first))
    {
        if (Top(first) == str[i])
        {
            first = pop(first);
            i++;
        }
        else
        {
            printf("The string is not palindrome.\n");
            break;
        }
    }
    if (i == strlen(str))
    {
        printf("The stirng is palindrome.\n");
    }
    return 0;
}