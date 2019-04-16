#include<stdio.h>
/*
    Author: Azizul Hoq
    Date: 14-03-2019
    ID: 2018200010018
    Program: 90 degree Reverse triangle

*/
int main(){
    int counter;
    int i,j,divide,k;
    printf("enter the number of lines : ");
    scanf("%d",&counter);
    for(i=1;i<=counter;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=counter-1;i>0;i--){
        for(j=i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    }
