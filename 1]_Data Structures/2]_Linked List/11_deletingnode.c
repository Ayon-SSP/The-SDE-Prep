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
void delete(int pos){
    struct Node *p = first, *q = NULL;
    if(pos==1){
        first = first->next;
        free(p);
    }
    else{
        for(int i=0; i<pos-1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);
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
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);
    create(arr, n);
    display(first);
    delete(1);
    display(first);
    delete(3);
    display(first);
    delete(2);
    display(first);
}