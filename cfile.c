#include<stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
};
struct node * insertion(struct node *head){
  struct node *a;
  a=malloc(sizeof(struct node));
  a->data=50;
  a->next=head;
}
int main(){
  struct node *head=NULL;
  struct node *second=NULL;
  struct node *third=NULL;
  struct node *fourth=NULL;
  head=malloc(sizeof(struct node));
  second=malloc(sizeof(struct node));
  third=malloc(sizeof(struct node));
  fourth=malloc(sizeof(struct node));
  head->data=10;
  head->next=second;
  second->data=20;
  second->next=third;
  third->data=30;
  third->next=fourth;
  fourth->data=40;
  fourth->next=NULL;
  head=insertion(head)
  while(head!=NULL){
    printf("%d \n",head->data);
    head=head->next;
  }
}
