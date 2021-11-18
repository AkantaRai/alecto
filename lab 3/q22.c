#include<stdio.h>
int main (){
    int i,j,num;
    printf("enter limit to table:");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        for(j=1;j<=num;j++){
            printf("%dx%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}