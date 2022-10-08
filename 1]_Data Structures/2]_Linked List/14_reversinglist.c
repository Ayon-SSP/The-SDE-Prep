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
void reverse(struct Node *curr){
    struct Node *prev = NULL, *nex = NULL;
    while(curr!=0){
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    first = prev;
}
void Rreverse(struct Node *q, struct Node *p){
    if(p!=0){
        Rreverse(p, p->next);
        p->next = q;
    }
    else
        first = q;
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
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);
    create(arr, n);
    display(first);
    reverse(first);
    display(first);
    Rreverse(0, first);
    display(first);
}