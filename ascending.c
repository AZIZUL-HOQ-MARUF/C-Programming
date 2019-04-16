#include<stdio.h>
int main(){
int i,j,lp;
for(i=5;i>=0;i--){
            j=i;
            lp=i;
            while(j!=0){
                    while(lp!=0){
                        printf("%d ",lp);
                        lp--;
                    }
                j--;
            }
            printf("\n");

}
}
