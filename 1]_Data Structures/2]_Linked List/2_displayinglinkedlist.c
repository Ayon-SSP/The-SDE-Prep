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
void display(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void displayRecursive1(struct Node *p){
    if(p!=0){
        printf("%d ", p->data);
        displayRecursive1(p->next);
    }
}
void displayRecursive2(struct Node *p){
    if(p!=0){
        displayRecursive2(p->next);
        printf("%d ", p->data);
    }
}
void main(){
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);
    create(arr, n);
    display(first);
    printf("\n");
    displayRecursive1(first);
    printf("\n");
    displayRecursive2(first);
}