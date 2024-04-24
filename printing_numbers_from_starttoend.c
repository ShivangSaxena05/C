#include <stdio.h>
void printit(int start,int end){
    for(int i=start;i<=end;i++){
        printf("%d \n",i);
}}
int main(){
int n,m;
    printf("Enter a number from where you want to start : ");
    scanf("%d",&n);
    printf("Enter a number from where you want to end : ");
    scanf("%d",&m);
    printit(n,m);
}