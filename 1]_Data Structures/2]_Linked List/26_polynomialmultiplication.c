#include <stdio.h>
#include <stdlib.h>
struct Node{
    int coeff, expo;
    struct Node *next;
};
struct Node *create(){
    int n;
    printf("Enter the maximum power of 'x' in the polynomial: ");
    scanf("%d", &n);
    struct Node *first = (struct Node *)malloc(sizeof(struct Node)), *last;
    printf("Enter the Coefficient of x^%d: ", n);
    scanf("%d", &first->coeff);
    first->expo = n;
    first->next = NULL;
    last = first;
    for (int i = 0; i < n; i++)    {
        struct Node *new = (struct Node *)malloc(sizeof(struct Node));
        new->expo = n - 1 - i;
        printf("Enter the Coefficient of x^%d: ", new->expo);
        scanf("%d", &new->coeff);
        new->next = NULL;
        last->next = new;
        last = new;
    }
    return first;
}
struct Node *insert(struct Node *ptr, int co, int ex){
    struct Node *new = malloc(sizeof(struct Node)), *temp;
    new->coeff = co;
    new->expo = ex;
    new->next = NULL;
    if (ptr == NULL || ex > ptr->expo)    {
        new->next = ptr;
        ptr = new;
    }
    else{
        temp = ptr;
        while (temp->next != NULL && temp->next->expo > ex)
            temp = temp->next;
        if(temp->next->expo == ex)
            temp->next->coeff += co;
        else{
            new->next = temp->next;
            temp->next = new;
        }
    }
    return ptr;
}
void display(struct Node *ptr){
    printf("Polynomial: ");
    while(ptr!=0){
        if (ptr->coeff){
            printf("%dx^%d ", ptr->coeff, ptr->expo);
            if (ptr->next!=0 && ptr->next->coeff > 0)
                printf("+ ");
        }
        ptr = ptr->next;
    }
    printf("\n");
}
struct Node *polyMul(struct Node *first, struct Node *second){
    struct Node *third, *tempsecond = second;
    while(first!=0){
        second = tempsecond;
        while(second!=0){
            third = insert(third, (first->coeff)*(second->coeff), (first->expo)+(second->expo));
            second = second->next;
        }
        first = first->next;
    }
    return third;
}
void main(){
    struct Node *first = create(), *second, *third;
    display(first);
    second = create();
    display(second);
    printf("--------After Multiplication--------\n");
    third = polyMul(first, second);
    display(third);
}