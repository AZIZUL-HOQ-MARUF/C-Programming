#include<stdio.h>
#include<math.h>
/*
    Program : Find Prime numbers between 1 to 1 million and
        calculate total Prime numbers .
    Author: Azizul Hoq
    ID : 2018200010018
    Date : 10/04/2019
*/
int main(){
int number,i,divisor,isPrime=0,counter = 0;

number = 1000000;

for(i = 1; i <= number; i +=2){

    if(i == 1){
        i ++;
        printf("\n%d",i);
        i--;
        counter++;
    }

    if( i == 3){
        printf("\n%d",i);
        counter++;
    }

    for(divisor = 2; divisor<= (int)sqrt(i); divisor ++)
    {
        isPrime = !(i % divisor == 0);
        if(!isPrime)
            break;
    }
    if(isPrime){
        printf("\n%d",i);
        counter++;
    }
}

printf("\n\nTotal Prime Numbers between 1 to 1 million = %d",counter);
return 0;
}

