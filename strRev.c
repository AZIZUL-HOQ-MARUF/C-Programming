#include<stdio.h>

/*
    Program :String reverse without strrev()
    Author : Azizul Hoq
    ID:2018200010018
    Date : 16/04/2019
*/
int main(){
    char str[50];
    int i,j,len;
    printf("Enter your String : ");
    gets(str);

    //finding String Length
    for(i=0;i<sizeof(str)/sizeof(char);i++){
        if('\0'==str[i]){
            len=i;
            break;
        }
    }
    //String Reverse
    for(i=1;i<=len;i++){
        for(j=0;j<len-i;j++){
            str[j]=str[j]+str[j+1];
            str[j+1]=str[j]-str[j+1];
            str[j]=str[j]-str[j+1];
        }
    }
    puts(str);
return 0;
}
