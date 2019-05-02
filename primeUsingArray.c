#include<stdio.h>
void checkPrime(int arr[]){
    int n;
    for(n=0;n<5;n++){
        if(arr[n] == 2){
            printf("\n%d is Prime Number.",arr[n]);
            continue;
        }
        if(!(arr[n]%2==0)){
            printf("\n%d is Prime Number.",arr[n]);
        }
    }
}

int main(){
    int x[5],i;
    for(i=0;i<5;i++){
            printf("\nEnter Numbers to check prime :");
            scanf("%d",&x[i]);
    }
    checkPrime(x);


return 0;}
