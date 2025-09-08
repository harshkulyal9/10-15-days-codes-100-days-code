//Write a program to calculate the factorial of a number.


#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int factorial;
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("%d",factorial);
    return 0;
}