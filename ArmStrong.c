/*
    Program : Find ArmStrong numbers between 1 to 1 million and
        calculate total armstrong numbers .
    Author: Azizul Hoq
    ID : 2018200010018
    Date : 10/04/2019
*/

#include<stdio.h>
#include<math.h>
int main()
{
int n,base,sum=0,counter=1,power;
double tempSum;

while(counter<=1000000){
        n = counter;
        tempSum=0.00;
        power = 0;

    while(n!=0){
        n=n/10;
        power++;
    }
    n = counter;
    while(n!=0){
        base = n % 10;
        tempSum += pow(base,power);
        n /= 10;
    }
    if(counter==(int)tempSum){
            printf("\n%d is armstrong  number",counter);
            sum++;
    }
    counter++;
}
    printf("\n\nTotal Armstrong Numbers between 1 to 1 million = %d",sum);

return 0;

}
