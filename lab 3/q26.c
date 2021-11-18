#include<stdio.h>
int main(){
    int i,j;
    for(i=4;i>=1;i--){
        for(j=i;j<=4;j++){
            printf("*");
        }
        for(j=i;j<4;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}