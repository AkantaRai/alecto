#include<stdio.h>
int main(){
    int sp,cp;
    printf("enter selling price(sp):");
    scanf("%d",&sp);
    printf("enter cost price(cp):");
    scanf("%d",&cp);
    if ((sp-cp)>0){
        printf("profit with %d.",sp-cp);
    }
    else{
        printf("loss with %d",cp-sp);

    }
    return 0;
}