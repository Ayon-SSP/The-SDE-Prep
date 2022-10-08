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
struct Node * search(struct Node *p, int key){
    while(p!=0){
        if(p->data == key)
            return p;
        p = p->next;
    }
    return NULL;
}
struct Node * Rsearch(struct Node *p, int key){
    if(p==0)
        return NULL;
    if(p->data == key)
        return p;
    else
        return Rsearch(p->next, key);
}
void main(){
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);
    create(arr, n);
    printf("%p %p", search(first, 7), Rsearch(first, 7));
}