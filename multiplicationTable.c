#include<stdio.h>
/*
    Author: Azizul Hoq
    Date: 15-03-2019
    ID: 2018200010018
    Program: multiplication table

*/
int main(){
    int factor,multiply,a;
    printf("Enter a number to which to multiply : ");
    scanf("%d",&a);
    for(multiply=1;multiply<=a;multiply++){
            printf("multiplication table of %d\n",multiply);
            for(factor=1;factor<=a;factor++){
                printf("%d X %d = %d\n",multiply,factor,multiply*factor);
            }
            printf("\n");
    }

return 0;
}
