#include<stdio.h>
int main(){
    char str[40],str1[40];
    int one=0,two=0,i;
    printf("Enter first string = ");
    gets(str);
    printf("Enter second string = ");
    gets(str1);
    for(i=0;'\0'!=str[i];i++){
        one +=str[i];
        two +=str1[i];
    }
    if(str[i] != str1[i]){
        printf("second string doesn't contain same as first string's character\n");
    }
    if(one == two){
        printf("first and second string contains same characters");
    }
    else{
        printf("\nfirst and second string doesn't contains same characters");
    }
return 0;
}
