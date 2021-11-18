#include<stdio.h>
int main(){
    int i,j,num;
    printf("enter size of board:");
    scanf("%d",&num);
    
    for(i=0;i<num;i++){
        for(j=0;j<=num;j++){
            printf("%c",219);
            printf(" ");
        }
        printf("\n");
        if (i%2==0){
            printf(" ",225);
        }
    }
    return 0;
}