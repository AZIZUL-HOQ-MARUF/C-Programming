#include <stdio.h>
/*
    Program : program to find out result
    Author : Azizul Hoq
    ID: 201820010018
    Date: 15/04/2019
*/
int main()
{
    int i;
    double marks[3],parentage ,total,grandTotal;
    for(i=0;i<sizeof(marks)/sizeof(double);i++){
        printf("\nEnter Marks of subject%d : ",i+1);
        scanf("%lf",&marks[i]);
        grandTotal+=100.00;
        total+=marks[i];
    }
    parentage  = (total*100.00)/grandTotal;

    if(parentage>=60.00){
        printf("\nFirst Division");
    }
    else if(parentage>=50.00){
        printf("\nSecond Division");
    }
    else if(parentage>=40.00){
        printf("\nThird Division");
    }
    else{
        printf("Fail");
    }

    return 0;
}
