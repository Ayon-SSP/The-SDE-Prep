#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first, *second;
void create1(int arr[], int n){
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
void create2(int arr[], int n){
    struct Node *last, *t;
    second = (struct Node*)malloc(sizeof(struct Node));
    second->data = arr[0];
    second->next = NULL;
    last = second;
    for(int i=1; i<n; i++){
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
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
struct Node *merge(struct Node *p, struct Node *q){
    struct Node *third, *last;
    if(p->data <= q->data){
        third = p;
        last = p;
        p = p->next;
        last->next = NULL;
    }
    else{
        third = q;
        last = q;
        q = q->next;
        last->next = NULL;
    }
    while(p!=0 && q!=0){
        if(p->data <= q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    while(p!=0){
        last->next = p;
        last = p;
        p = p->next;
        last->next = NULL;
    }
    while(q!=0){
        last->next = q;
        last = q;
        q = q->next;
        last->next = NULL;
    }
    return third;
}
void main(){
    int arr1[] = {1, 3, 5, 7, 9}, arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr1)/sizeof(int);
    int m = sizeof(arr2)/sizeof(int);
    create1(arr1, n), create2(arr2, m);
    struct Node *third = merge(first, second);
    display(third);
}