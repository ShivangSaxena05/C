#include<stdio.h>
#include <stdlib.h>
void insertion(struct node *a){
  struct node *a;
  a=malloc(sizeof(struct node));
  a->data=50;
  a->next=first;
  head=a;
}
struct node{
  int data;
  struct node *next;
};
int main(){
  struct node *head;
  struct node *first=NULL;
  struct node *second=NULL;
  struct node *third=NULL;
  struct node *fourth=NULL;
  first=malloc(sizeof(struct node));
  second=malloc(sizeof(struct node));
  third=malloc(sizeof(struct node));
  fourth=malloc(sizeof(struct node));
  first->data=10;
  first->next=second;
  second->data=20;
  second->next=third;
  third->data=30;
  third->next=fourth;
  fourth->data=40;
  fourth->next=NULL;
  insertion(a);
  while(head!=NULL){
    printf("%d \n",head->data);
    head=head->next;
  }
}
