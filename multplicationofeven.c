#include<stdio.h>
int main(){
    int multiplication=1;
    int n;
    printf("enter the number:");
    scanf("%d",&n);
for(int i=2;i<=n;i=i+2){
    multiplication=multiplication*i;

}
printf("%d",multiplication);

return 0;
}