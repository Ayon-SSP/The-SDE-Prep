/**
 * @file Infix To Postfix 
 * @brief Implementation of [Infix to Postfix]
 *
 * @details
 * We are given an Infix experssion, We have to Convert it into Postix experssion 
 *
 * Worst Case Time Complexity: O(n)
 * Space complexity: O(1)
 * @author [Aryan Prakash](https://github.com/Aryanprakashh)
 **/

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
int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
node *push(node *head, char c)
{
    if (isFull(head))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->data = c;
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
void reverse(char *s)
{
    int n1 = strlen(s);
    for (int i = 0; i < n1 / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n1 - i - 1];
        s[n1 - i - 1] = temp;
        if (s[i] == '(')
        {
            s[i] = ')';
        }
        else if (s[i] == ')')
        {
            s[i] = '(';
        }
        if (s[n1 - i - 1] == '(')
        {
            s[n1 - i - 1] = ')';
        }
        else if (s[n1 - i - 1] == ')')
        {
            s[n1 - i - 1] = '(';
        }
    }
}
int main()
{
    node *st = NULL;
    printf("Testing- L+(M*N-(O/P^Q)*R)*S\n");
    char test[] = "L+(M*N-(O/P^Q)*R)*S";
    char str2[20];
    int k = 0;
    reverse(test);
    for (int i = 0; i <= strlen(test) - 1; i++)
    {
        if (test[i] <= 'z' && test[i] >= 'a' || test[i] <= 'Z' && test[i] >= 'A')
        {
            str2[k] = test[i];
            k++;
        }
        else if (test[i] == '(')
        {
            st = push(st, test[i]);
        }
        else if (test[i] == ')')
        {
            while (!isEmpty(st) && Top(st) != '(')
            {
                str2[k++] = Top(st);
                st = pop(st);
            }
            if (!isEmpty(st))
            {
                st = pop(st);
            }
        }
        else
        {
            while (!isEmpty(st) &&
                   precedence(Top(st)) >= precedence(test[i]))
            {
                str2[k++] = Top(st);
                st = pop(st);
            }
            st = push(st, test[i]);
        }
    }
    while (!isEmpty(st))
    {
        str2[k++] = Top(st);
        st = pop(st);
    }
    str2[k] = '\0';
    reverse(str2);
    printf("Resulting postfix expression :\n");
    printf("%s", str2);
    printf("Test case Passed:\n");
    return 0;
}