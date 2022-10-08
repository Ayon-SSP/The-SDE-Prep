#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *prev, *next;
    int data;
};
struct Node *create(){
    struct Node *first = (struct Node *)malloc(sizeof(struct Node)), *last;
    first->prev = NULL;
    first->next = NULL;
    printf("Enter data: ");
    scanf("%d", &first->data);
    last = first;
    int input;
    printf("Enter '1' to enter more data or '0' to exit: ");
    scanf("%d", &input);
    while(input){
        struct Node *new = (struct Node *)malloc(sizeof(struct Node));
        new->next = NULL;
        new->prev = last;
        last->next = new;
        last = new;
        printf("Enter data: ");
        scanf("%d", &new->data);
        printf("Enter '1' to enter more data or '0' to exit: ");
        scanf("%d", &input);
    }
    return first;
}
void display(struct Node *ptr){
    while(ptr!=0){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void main(){
    struct Node *first;
    first = create();
    display(first);
}