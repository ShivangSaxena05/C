#include <stdio.h>
void printsum(int Start,int End){
    int sum=0;
    for(int i=Start; i<=End;i++){
        sum+=i;
    }
        printf("%d \n",sum);
}
int main(){
    int n,m;
    printf("Enter a number from where you want to start : ");
    scanf("%d",&n);
    printf("Enter a number from where you want to end : ");
    scanf("%d",&m);
    printf("Adding numbers from start to end : ");
    printsum(n,m);
    return 0;
}