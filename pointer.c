#include<stdio.h>
int main(){
    int arr[3];
    int a=4;
    int *ptr1=&a;
    float b=5.4;
    float *ptr2=&b;
    char ch='A';
    char *ptr3=&ch;
    arr[0]=*ptr1;
    arr[1]=*ptr2;
    arr[2]=*ptr3;
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%c\n",arr[2]);
    return 0;

}