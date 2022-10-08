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
void search(struct Node *p, int key){ // key vale node ko first vale node pe le aata h
    struct Node *q, *ptr = p;
    while(ptr!=0){
        if(ptr->data == key){
            q->next = ptr->next;
            ptr->next = first;
            first = ptr;
        }
        q = ptr;
        ptr = ptr->next;
    }
}
void main(){
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);
    create(arr, n);
    search(first, 7);
    printf("%d", first->data);
}