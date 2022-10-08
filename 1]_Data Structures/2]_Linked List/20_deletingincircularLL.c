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

int len(struct Node *ptr){
    int count=0;
    struct Node *p = ptr;
    do{
        count++;
        p = p->next;
    }while(p!=ptr);
    return count;
}

void delete(struct Node *ptr, int pos){
    struct Node *p = ptr, *q;
    if(pos>0 && pos<=len(ptr)){
        for(int i=0; i<pos-1; i++){
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        free(q);
    }
    else if(pos==0){ // ye work ni krra :( 
        while(p->next!=ptr){
            p = p->next;
        }
        if(p==ptr){
            free(ptr);
            ptr=NULL;
        }
        else{
            p->next = ptr->next;
            q = ptr;
            ptr = p->next;
            free(q);
        }
    }
}

void main(){
    struct Node *first = create();
    display(first);
    delete(first, 4);
    display(first);
    delete(first, 0);
    display(first);
}