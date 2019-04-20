#include<stdio.h>

int main(){
int i, quotient,divisor,remainder;
printf("Enter the number :");
scanf("%d",&i);
printf("\nEnter divisor number :");
scanf("%d",&divisor);
if(divisor!=0){
   quotient = i/divisor;
   remainder = i%divisor;


   if(remainder>0){
        printf("quotient %d remainder %d",quotient,remainder);
   }
   else{

        printf("quotient %d",quotient);
   }

}
else{
    printf("Divisior can't be 0 (zero)");
}



return 0;}
