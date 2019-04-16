#include<stdio.h>
/*
    Program :String Uppercase without strupr()
    Author : Azizul Hoq
    ID:2018200010018
    Date : 16/04/2019
*/
int main(){
    char str[50];
    int i;
    printf("Enter your String : ");
    gets(str);
    for(i=0;i<sizeof(str)/sizeof(char);i++){
        if('\0'==str[i]){
            break;
        }
        if(str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
    puts(str);
return 0;
}
