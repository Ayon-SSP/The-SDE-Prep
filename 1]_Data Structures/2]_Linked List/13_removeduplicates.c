#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first;
void create(int arr[], int n){
    struct Node *last, *t;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for(int i=1; i<n; i++){
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void rmdup(struct Node *p){
    struct Node *q = p->next;
    while(q!=0){
        if(p->data == q->data){
            p->next = q->next;
            free(q);
            q = p->next;
        }
        else{
            p = p->next;
            q = q->next;
        }
    }
}
void display(struct Node *p){
    struct Node *ptr = p;
    while(ptr!=0){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void main(){
    int arr[] = {1, 3, 3, 3, 9};
    int n = sizeof(arr)/sizeof(int);
    create(arr, n);
    display(first);
    rmdup(first);
    display(first);
}