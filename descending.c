#include<stdio.h>
/*
    Author: Azizul Hoq
    Date: 14-03-2019
    ID: 2018200010018
    Program: descending ordered decimal Tree

*/
int main(){

int i,j,digit,counter=5;
for(i=counter;i>=0;i--){
        j=i;
        digit=counter;
        while(j>0){
                printf("%d ",digit);
                digit--;
                j--;
        }
        printf("\n");

}
}
