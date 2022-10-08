#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}node;
void main(){
    node *ptr = (node*)malloc(sizeof(node));
    ptr->data = 69;
    printf("%d\n%p", ptr->data, ptr->next);
}