#include<stdio.h>
int main(){
    int i,j;
    for(i=3;i>=1;i--){
        for(j=i;j<=3;j++){
            printf("*");
        }
        for(j=i;j<3;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=2;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("*");
        }
        for(j=i;j>1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}