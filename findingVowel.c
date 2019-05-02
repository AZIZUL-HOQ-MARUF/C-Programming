#include<stdio.h>
/*
    Program = finding vowel,consonant,digit,special character
    from given string
    author = Azizul Hoq
    Date = 18/04/2019
    ID = 2018200010018

*/
int main(){

    char str[150],vowel[150],conso[150],digit[150],spec[150];
    int i,d=0,s=0,v=0,c=0;
    printf("Enter the string ");
    gets(str);

    for(i=0;i<sizeof(str)/sizeof(char);i++){
            if('\0'==str[i]){
                vowel[v] = '\0';
                conso[c] = '\0';
                digit[d] = '\0';
                spec[s] = '\0';
                break;
            }
            //printf("\n%d",str[i]);
            if(str[i]>47 && str[i]<58){
                digit[d]=str[i];
                d++;
            }
            else if(str[i]==97 || str[i]==101 ||
                    str[i]==105||str[i]==111 || str[i]==117
                    ||str[i]==65 ||str[i]==69 || str[i]==73 ||
                    str[i]==79 || str[i]==85){

                    vowel[v]=str[i];
                    v++;
            }

            else if(((str[i]>64 && str[i]<91) ||
                    (str[i]>96 && str[i]<123)) &&
                    !(str[i]==97 || str[i]==101 ||
                    str[i]==105||str[i]==111 || str[i]==117
                    ||str[i]==65 ||str[i]==69 || str[i]==73 ||
                    str[i]==79 || str[i]==85)){
                conso[c]=str[i];
                c++;
            }
            else{
                spec[s]=str[i];
                s++;
            }
    }
    if(v>0){
        printf("\n\nvowels are = ");
        puts(vowel);
        printf("Total vowels = %d",v);
    }
    if(c>0){
        printf("\n\nconsonants are = ");
        puts(conso);
        printf("Total consonants = %d",c);
    }
    if(d>0){
        printf("\n\ndigits are = ");
        puts(digit);
        printf("Total digits = %d",d);
    }
    if(s>0){
        printf("\n\nspecial characters are = ");
        puts(spec);
        printf("Total special characters = %d",s);
    }
    printf("\n\n");

return 0;
}
