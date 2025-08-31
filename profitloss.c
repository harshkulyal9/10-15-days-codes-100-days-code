//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){
    float cp;
    printf("enter the cost price:");
    scanf("%f",&cp);
    float sp;
    printf("enter the value of sell price:");
    scanf("%f",&sp);
    float profit;
    profit=sp-cp;
    float loss;
    loss=cp-sp;
    float percentage;
    percentage= (profit/cp)*100;
    float percentages;
    percentages=(loss/cp)*100;
     if(sp>cp){
        printf("amount=%f",profit);
        printf("\nprofit \nprofit percentage:%f",percentage);
    }
    else if(cp>sp){
        printf(" amount=%f",loss);
        printf(" \nloss  \nloss percentage:%f",percentages);

    }
    else{
        printf("no profit no loss ");
    }
    return 0;

}
