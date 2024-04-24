#include <stdio.h>
int armstrong(int num){
    int digit,arms;
    while(num!=0){
        digit=num%10;
        arms+=digit*digit*digit;
        num/=10;
    }
    if(arms==num){
        printf("It's a armstrong number ");
    }
    else{
        printf("It's not a armstrong number");
    }
}

int main(){
    armstrong(361);
}