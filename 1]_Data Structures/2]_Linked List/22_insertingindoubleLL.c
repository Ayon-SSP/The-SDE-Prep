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
int len(struct Node *ptr){
    int count=0;
    while(ptr!=0){
        count++;
        ptr = ptr->next;
    }
    return count;
}
void insert(struct Node *ptr, int pos){
    struct Node *new = (struct Node *)malloc(sizeof(struct Node)), *p = ptr;
    printf("Enter data: ");
    scanf("%d", &new->data);
    if(ptr==NULL){
        ptr = new;
        new->next = NULL;
        new->prev = NULL;
    }
    else if(pos==0){
        new->next = ptr;
        ptr->prev = new;
        new->prev = NULL;
        ptr = new;
    }
    else{
        for(int i=0; i<pos-1; i++){
            p = p->next;
        }
        new->next = p->next;
        new->prev = p;
        p->next->prev = new;
        p->next = new;
    }
}
void main(){
    struct Node *first;
    first = create();
    display(first);
    insert(first, 3);
    display(first);
}