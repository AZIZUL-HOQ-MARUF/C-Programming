#include<stdio.h>
/*
    Program : Finding String Length without strlen()
    Author : Azizul Hoq
    ID:2018200010018
    Date : 16/04/2019
*/
int main(){
    char str[50];
    int i;
    printf("Enter Your String : ");
    gets(str);
    for(i=0;i<sizeof(str)/sizeof(char);i++){
        if('\0'==str[i]){
            break;
        }
    }
    printf("Length of String is : %d",i);


return 0;
}
