#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct stack *st, int n)
{

    st->size = n;
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int)); // now our stack is ready to go
}
void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

void pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
    printf("Cant Pop ! Stack underflow\n");
    // printf("Stack underflow\n");
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    printf("%d ", x);
}
int peek(struct stack st, int pos)
{
    if (st.top == -1)
    {
        printf("Stack is empty No elment to peek\n");
    }
    else
    {
        return st.s[st.top - pos + 1];
    }
}
int isempty(struct stack st)
{
    if (st.top == -1)
        return 1;
    else
        return 0;
}
void isfull(struct stack st)
{
    if (st.top == st.size - 1)
        printf("Stack is Full\n");
    else
        printf("Stack is not FUll\n");
}
void display(struct stack st, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", st.s[i]);
    }
    printf("\n");
}

int main()
{
    struct stack st;
    int x;
    printf("Enter size of stack you want to create\n");
    scanf("%d", &x);
    create(&st, x);
    int n;
    printf("HOw many Data you want to Enter in Stack\n");
    scanf("%d", &n);
    int m = n;
    while (n--)
    {
        int s;
        printf("Enter Data\n");
        scanf("%d", &s);
        push(&st, s);
    }
    printf("Poping data from Stack\n");
    pop(&st);
    printf("\n");
    // printf("%d \n", isempty(st));
    display(st, m);
}