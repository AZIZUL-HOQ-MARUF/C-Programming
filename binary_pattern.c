#include<stdio.h>

int main(){
    int i,j,a,b,digit=1;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
                if(a%2 == 0){
                    if((a/2) == i){
                        printf("%d",!digit);
                        continue;
                    }
                }
                else{
                    if((a/2)+1 == i){
                        printf("%d",!digit);
                        continue;
                    }
                }

            if(b%2==0) {
                if((b/2) == j){
                printf("%d",!digit);
               }
               else{
                printf("%d",digit);
               }
            }
            else{
                if((b/2)+1 == j){
                    printf("%d",!digit);
                }
                else{
                    printf("%d",digit);
                }
            }

        }
        printf("\n");


    }


return 0;}
