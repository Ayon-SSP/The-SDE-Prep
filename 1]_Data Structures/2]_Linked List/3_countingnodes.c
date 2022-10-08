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
int count_iterative(struct Node *p){
    int count=0;
    while(p!=0){
        count++;
        p = p->next;
    }
    return count;
}
int count_recursive(struct Node *p){
    if(p!=0)
        return count_recursive(p->next)+1;
    else
        return 0;
}
void main(){
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);
    create(arr, n);
    printf("%d %d", count_iterative(first), count_recursive(first));
}