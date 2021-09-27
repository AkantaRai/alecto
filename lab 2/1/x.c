#include<stdio.h>
int main (){
    int sales;
    printf("enter sales amount:");
    scanf("%d",&sales);
    if (sales<5000){
        printf("commission=0");
    }
    else if(sales>=5000&&sales<10000){
        printf("commission=%f",(float)sales*0.05);
    }
    else if (sales>=10000&&sales<15000){
        printf("commission=%f",(float)sales*0.07);
    }
    else {
        printf("commission=%.2f",(float)sales*0.1);
    }
    return 0;
}