#include <stdio.h>
int sum_of_units(int num){
    int lost,sum=0;
    while(num!=0){
        lost=num%10;
        sum+=lost;
        num/=10;
    }
    printf("%d",sum);
}
int main(){
    int n;
    printf("Enter a number to get sum of the unit digits : ");
    scanf("%d",&n);
    sum_of_units(n);
}