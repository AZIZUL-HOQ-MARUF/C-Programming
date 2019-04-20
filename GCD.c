#include<stdio.h>
/*  Program : finding GCD number
    author : Azizul Hoq
    ID : 2018200010018
    date :20/04/2019
*/
int main(){
    int i,num,num1,gcd;
    printf("Enter the First number :");
    scanf("%d",&num);
    printf("\nEnter the Second number :");
    scanf("%d",&num1);

    for(i=1;i<=num && i<=num1;i++){
        if(num%i==0 && num1%i==0){
            gcd = i;
        }
    }
    printf("G.C.D of %d and %d is = %d",num,num1,gcd);
return 0 ;

}
