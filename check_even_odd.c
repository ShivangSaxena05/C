#include <stdio.h>
#include <stdbool.h>
bool check(num){
    if(num%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    printf("Enter a number to check number is odd or even if even it will return true else false : ");
    scanf("%d",&n);
    check(n);
}