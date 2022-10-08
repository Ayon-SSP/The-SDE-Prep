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
void insert(int data){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node)), *ptr = first;
    p->data = data;
    if(ptr->data > data){
        p->next = first;
        first = p;
    }
    else{
        while(ptr && ptr->next->data < data){
            ptr = ptr->next;
        }
        p->next = ptr->next;
        ptr->next = p;
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
    insert(8);
    display(first);
}