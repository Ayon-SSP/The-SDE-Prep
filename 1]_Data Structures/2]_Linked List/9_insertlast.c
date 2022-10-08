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
void insertlast(int data){
    struct Node *new = (struct Node *)malloc(sizeof(struct Node)), *last;
    new->data = data;
    new->next = NULL;
    if(first==NULL){
        first = new;
        last = new;
    }
    else{
        last->next = new;
        last = new;
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
    insertlast(1);
    insertlast(3);
    insertlast(4);
    insertlast(2);
    insertlast(5);
    display(first);
}