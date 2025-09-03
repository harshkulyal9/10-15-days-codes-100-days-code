#include<stdio.h>
int main(){
   int sum=0;
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}