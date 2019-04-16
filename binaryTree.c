#include<stdio.h>
/*
    Author: Azizul Hoq
    Date: 14-03-2019
    ID: 2018200010018
    Program: Binary Tree

*/
int main(){
int i,j,digit=0,counter=5;

for(i=1;i<=counter;i++){
        j=i;
        while(j>0){
                digit = !digit;
                printf("%d ",digit);
                j--;
        }
        digit =0;
        printf("\n");

}
}

