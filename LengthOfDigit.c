#include <stdio.h>
/*
    Program : Count Number of Digits in an Integer
    Author : Azizul Hoq
    ID: 201820010018
    Date: 15/04/2019
*/
int main()
{
    int i=0,number;
    printf("Enter Number : ");
    scanf("%d",&number);
    while(number!=0){
        number=number/10;
        i++;
    }
    printf("Length of Digit is : %d",i);

    return 0;
}
