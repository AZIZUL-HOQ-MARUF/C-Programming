#include<stdio.h>
/*
    Program :String copy without strcpy()
    Author : Azizul Hoq
    ID:2018200010018
    Date : 16/04/2019
*/
int main(){
    char str[50],strCpy[50];
    int i;
    printf("Enter your String : ");
    gets(str);
    for(i=0;i<sizeof(str)/sizeof(char);i++){
        if('\0'==str[i]){
            strCpy[i]='\0';
            break;
        }
        strCpy[i]=str[i];
    }
    printf("\n");
    puts(str);
    printf("\n");
    puts(strCpy);

return 0;
}
