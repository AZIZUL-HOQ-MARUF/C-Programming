#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        printf("\n");
        for(j=1;j<=n;j++){
            if(n%2 ==0){
                if(n/2 == i){
                    printf("+");
                    continue;
                }
                if(n/2 == j){
                    printf("+");
                } else{
                    printf(" ");
                }
            }
            else{
                if((n/2)+1 == i){
                    printf("+");
                    continue;
                }
                if((n/2)+1 == j){
                    printf("+");
                } else{
                    printf(" ");
                }
            }


        }
    }

return 0;}
