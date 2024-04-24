#include <stdio.h>
int reverse(int num){
    int digit,new=0;
    while(num!=0){
        digit=num%10;
        new=new*10+digit;
        num/=10;
    }
    printf("%d",new);
}
int main(){
    int n;
    printf("Enter a number to reverse : ");
    scanf("%d",&n);
    reverse(n);
}