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
int check(struct Node *p){
    while(p->next!=0){
        if(p->data > p->next->data)
            return 0;
        p = p->next;
    }
    return 1;
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
    printf("Status: %d", check(first));
}