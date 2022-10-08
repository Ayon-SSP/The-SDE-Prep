#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *prev, *next;
    int data;
};
struct Node *first;
struct Node *create(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node)), *last;
    head->prev = NULL;
    head->next = NULL;
    printf("Enter data: ");
    scanf("%d", &head->data);
    last = head;
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
    return head;
}
void display(struct Node *ptr){
    while(ptr!=0){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int len(struct Node *ptr){
    int count=0;
    while(ptr!=0){
        count++;
        ptr = ptr->next;
    }
    return count;
}
void reverse(struct Node *ptr){
    struct Node *temp;
    while(ptr!=0){
        temp = ptr->next;
        ptr->next = ptr->prev;
        ptr->prev = temp;
        ptr = ptr->prev;
        if(ptr!=0 && ptr->next==0)
            first = ptr;
    }
}
void main(){
    first = create();
    display(first);
    reverse(first);
    display(first);
}