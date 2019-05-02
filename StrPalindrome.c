#include<stdio.h>

/*
    Program :String palindrome without built in func()
    Author : Azizul Hoq
    ID:2018200010018
    Date : 16/04/2019
*/
int main(){
    char str[50],strNew[50];
    int i,j,len,flag;
    printf("Enter your String : ");
    gets(str);

    //finding String Length
    for(i=0;i<sizeof(str)/sizeof(char);i++){
        if('\0'==str[i]){
            len=i;
            strNew[i]='\0';
            break;
        }
        strNew[i]=str[i];

    }
    //String Reverse
    for(i=1;i<=len;i++){
        for(j=0;j<len-i;j++){
            str[j]=str[j]+str[j+1];
            str[j+1]=str[j]-str[j+1];
            str[j]=str[j]-str[j+1];
        }
    }
    for(i=0;i<sizeof(str)/sizeof(char);i++){
        if(str[i]=='\0'){
                break;
            }
        if(str[i]==strNew[i]){
            flag=1;
            continue;
        }
        else{
            flag =0;
            break;
        }
    }
    puts(str);
    printf("\n");
    puts(strNew);
    printf("\n");
    if(flag){
        printf("palindrome");
    }
    else
        printf("\nnot palindrome");

return 0;
}
