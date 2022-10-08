#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *create(){
    struct Node *first = (struct Node*)malloc(sizeof(struct Node)), *last;
    printf("Enter data: ");
    scanf("%d", &first->data);
    first->next = NULL;
    last = first;
    int input=0;
    printf("Enter '1' to enter more data or '0' to exit: ");
    scanf("%d", &input);
    while(input==1){
        struct Node *new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &new->data);
        new->next = NULL;
        last->next = new;
        last = new;
        printf("Enter '1' to enter more data or '0' to exit: ");
        scanf("%d", &input);
    }
    last->next = first;
    return first;
}
void display(struct Node * ptr){
    struct Node *p = ptr;
    printf("\n");
    do{
        printf("%d ", p->data);
        p = p->next;
    }while(p!=ptr);
    printf("\n\n");
}

void insert(struct Node *ptr, int pos){
    struct Node *p = ptr;
    if(pos!=0){
        for(int i=0; i<pos-1; i++){
            p = p->next;
        }
    }
    else{
        while(p->next!=ptr){
            p = p->next;
        }
    }
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->next = p->next;
    p->next = new;
    printf("Enter data: ");
    scanf("%d", &new->data);
}

void main(){
    struct Node *first = create();
    display(first);
    insert(first, 0);
    display(first);
}