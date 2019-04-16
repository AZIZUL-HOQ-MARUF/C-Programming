#include<stdio.h>
#include<math.h>
/*
all prime
*/
int main(){
int number,i,divisor,isPrime=0;
printf("Enter a number range to check prime : ");
scanf("%d",&number);

if(number>=2){
printf("%d\n",2);
}
if(number>=3){
printf("%d\n",3);
}
for(i = 5; i <= number; i +=2){
    for(divisor = 2; divisor<= (int)sqrt(i); divisor ++)
    {
        isPrime = !(i % divisor == 0);
        if(!isPrime)
            break;
    }
    if(isPrime){
    printf("%d\n",i);
    }
}
return 0;
}
