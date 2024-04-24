#include <stdio.h>
int get_removed_last_digit(int num){
    num/=10;
    return num;
}
int main(){
    int n;
    printf("Enter a number to remove the last digit : ");
    scanf("%d",&n);
    get_removed_last_digit(n);
}