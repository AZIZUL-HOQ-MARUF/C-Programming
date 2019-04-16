#include<stdio.h>
/*
    Author: Azizul Hoq
    Date: 14-03-2019
    ID: 2018200010018
    Program: ascending ordered decimal Tree

*/
int main(){
int i,j,digit,counter=5;

for(i=1;i<=counter;i++){
        j=i;
        digit=1;
        while(j>0){
                printf("%d ",digit);
                digit++;
                j--;
        }
        printf("\n");

}
}
