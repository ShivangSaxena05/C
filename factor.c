#include <stdio.h>
void factor(int n){
    int fact=n;
    while(n>1){
        printf("%d*",n);
        n--;
        fact*=n;
    }
        printf("1 = %d \n",fact);
}
int main(){
      int n;
    printf("Enter a number to get factor : ");
    scanf("%d",&n);
    printf("factor of number : ");
    factor(n);
    return 0;
}