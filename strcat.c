#include<stdio.h>
/*
    Program :String concatenation without strcat()
    Author : Azizul Hoq
    ID:2018200010018
    Date : 16/04/2019
*/
int main(){
    char str[50],str1[50];
    int i,j,len;
    printf("Enter First String : ");
    gets(str);
    printf("\nEnter Second String : ");
    gets(str1);
    for(i=0;i<sizeof(str)/sizeof(char);i++){
        if('\0'==str[i]){
            len = i;
            break;
        }
    }
    for(i=0;i<sizeof(str1)/sizeof(char);i++){

        if('\0'==str1[i]){
            str[len]='\0';
            break;
        }
        if(len<sizeof(str)/sizeof(char) -1){
            str[len]=str1[i];
        }
        len++;
    }
    puts(str);
return 0;
}
