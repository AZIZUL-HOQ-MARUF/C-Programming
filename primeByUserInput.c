#include<stdio.h>
int main(){
int a,divisor=0,isPrime;
printf("Enter the number : ");
scanf("%d",&a);
if(a==2 || a==3){
    printf("\n%d is prime number",a);
}
for(divisor = 2; divisor <= (int)sqrt(a);divisor++){
    isPrime = !(a % divisor == 0);
    if(!isPrime){
        printf("\n%d is not prime number",a);
        break;
    }
}
if(isPrime){
    printf("\n%d is prime number",a);
}

return 0;
}

