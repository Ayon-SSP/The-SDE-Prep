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
    last->next = first; // toggle this comment to revert the status
}
int checkloop(struct Node *p){
    struct Node *q = p;
    do{
        p = p->next;
        q = q->next;
        (q!=0) ? q = q->next : NULL;
        if(p==q)
            return 1;
    }while(p && q);
    return 0;
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
    // display(first); // toggle this comment to revert the status
    printf("Status: %d", checkloop(first));
}