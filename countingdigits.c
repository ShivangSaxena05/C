#include <stdio.h>
int counting(int num){
    int count = 0;
    while(num!=0){
        num/=10;
        count++;
    }
    printf("%d",count);
}
int main(){
    int n;
    printf("Enter a number to count digits : ");
    scanf("%d",&n);
    counting(n);
}