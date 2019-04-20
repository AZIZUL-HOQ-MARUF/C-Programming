#include<stdio.h>
/*  Program : finding factorial number
    author : Azizul Hoq
    ID : 2018200010018
    date :20/04/2019
*/
int main(){
int i,n;
long long int  factorial=1;
printf("Enter the number :");
scanf("%d",&n);

for(i=1;i<=n;i++){
    factorial*=i;
}
if(n!=0){
  printf("\nFactorial number of %d is = %llu",n,factorial);
}


return 0;
}
