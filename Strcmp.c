#include<stdio.h>
/*
    Program = compare string without using strcmp()
    author = azizul hoq
    date = 17/04/19
    id 2018200010018
    */
int compare(char str[],char str1[]){
    int i,flag=0;
    for(i=0;str[i]!='\0';i++){
        if('\0'!=str1[i] && str[i]==str1[i]){
            flag =1;
        }
        else{
            flag =0;
            break;
        }
    }
    if(str[i] != str1[i]){
        flag=0;
    }
    if(flag == 1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char str[50],str1[50];
    printf("Enter first string = ");
    gets(str);
    printf("Enter second string = ");
    gets(str1);
    if(compare(str,str1)==1){
        printf("string matched");
    }
    else{
        printf("string don't matched");
    }

return 0 ;
}
