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

// void RDisplay(struct Node *h){
//     static int flag=0;
//     if(h!=Head || flag==0)
//     {
    //     flag=1;
    //     printf("%d ",h->data);
    //     RDisplay(h->next);
//     }
//     flag=0;
// }

void main(){
    struct Node *first = create();
    display(first);
}