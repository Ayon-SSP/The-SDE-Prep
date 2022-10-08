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
void insert(int pos, int data){
    struct Node *ptr = first;
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    if(pos){
        for(int i=0; i<pos-1 && ptr->next; i++){
            ptr = ptr->next;
        }
        if(ptr){
            new->data = data;
            new->next = ptr->next;
            ptr->next = new;
        }
    }
    else{
        new->data = data;
        new->next = first;
        first = new;
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
    // create(arr, n);
    // display(first);
    insert(0, 1);
    insert(1, 3);
    insert(2, 5);
    insert(6, 7); // making linked list by inserting elements 
    display(first);
}