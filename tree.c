#include<stdio.h>
/*
    Author: Azizul Hoq
    Date: 14-03-2019
    ID: 2018200010018
    Program: Equilateral triangle

*/
int main(){
    int i,j,divide,counter;
    printf("enter the numbers of line : ");
    scanf("%d",&counter);
    divide = counter;
    for(i=0;i<=counter;i++){
        for(j=0;j<i;j++){
            while(divide>=0){
                    printf(" ");
                    divide--;
                }
            printf("* ");
        }
        printf("\n");
        divide = counter-i-1;
    }

return 0;
}
