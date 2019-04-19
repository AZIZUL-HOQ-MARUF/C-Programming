#include<stdio.h>

int main(){
    int i,sum=0,num;
    printf("Enter Input number :");
    scanf("%d",&num);
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    printf("\nsum of digit is : %d",sum);

return 0;
}
