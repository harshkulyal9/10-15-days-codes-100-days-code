//Write a program to reverse a given number.


#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int r=0;
    while(n!=0){
        r=r+(n%10);
        r=r*10;
        n=n/10;

    }
    r=r/10;
    printf("%d",r);
    return 0;
}