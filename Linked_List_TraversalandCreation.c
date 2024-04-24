#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insert(struct node** head,int new){
    struct node* new_node;
    new_node=malloc(sizeof(struct node));
    new_node->data=new;
    new_node->next=(*head);
    (*head)=new_node;
}
void print(struct node* node){
    while (node!=NULL)
    {
        printf("%d",node->data);
        node=node->next;
    }
    
}
int main(){
    struct node* head = NULL;
    insert(&head,5);
    insert(&head,9);
    insert(&head,6);
    insert(&head,2);
    insert(&head,1);
    print(head);
}