#include<stdio.h>
#include<stdlib.h>
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
    for(int i=0; i<n; i++){
        struct Node *new = (struct Node *)malloc(sizeof(struct Node));
        new->expo = n-1-i;
        printf("Enter the Coefficient of x^%d: ", new->expo);
        scanf("%d", &new->coeff);
        new->next = NULL;
        last->next = new;
        last = new;
    }
    return first;
}
void display(struct Node *ptr){
    printf("Polynomial: ");
    while(ptr!=0){
        if(ptr->coeff){
            printf("%dx^%d ", ptr->coeff, ptr->expo);
            if(ptr->next!=0 && ptr->next->coeff>0)
                printf("+");
        }
        ptr = ptr->next;
    }
    printf("\n");
}
void main(){
    struct Node *first = create();
    display(first);
}