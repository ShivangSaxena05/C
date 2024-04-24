//check the number is palindrome or not
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int original=n;
    int rev=0;
    while(n!=0){
        int m = n%10;
        rev = (rev*10)+m;
        n=n/10;

    }
    if(original==rev){
        printf("it is palindrome.");
    }
    else{
        printf("it is not palindrome");
    }
}