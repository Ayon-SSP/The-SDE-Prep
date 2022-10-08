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
int max_iterative(struct Node *p){
    int max = -32768;
    while(p!=0){
        if(p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}
int max_recursive(struct Node *p){
    if(p==0)
        return -32768;
    int x = max_recursive(p->next);
    if(x > p->data)
        return x;
    else
        return p->data;
}
void main(){
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);
    create(arr, n);
    printf("%d %d", max_iterative(first), max_recursive(first));
    
}