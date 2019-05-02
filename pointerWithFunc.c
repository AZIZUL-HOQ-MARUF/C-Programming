#include<stdio.h>

void pointer(int *ptr , int *ptr2){
    printf("\nAddress of first variable : %d",ptr);
    printf("\nAddress of second variable : %d",ptr2);
    printf("\nValue of First Variable : %d",*ptr);
    printf("\nValue of second Variable : %d",*ptr2);

}
int main(){
    int first,second;
    printf("Enter First Number : ");
    scanf("%d",&first);
    printf("Enter Second Number : ");
    scanf("%d",&second);
    pointer(&first,&second);


return 0;}
