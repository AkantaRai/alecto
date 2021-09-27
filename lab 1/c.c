#include<stdio.h>
int main(){
    int principle=1000,rate=2,time=1,intrest,amount;
    intrest=(principle*rate*time)/100;
    amount=intrest+principle;
    printf("intrest=%d\namount=%d",intrest,amount);
    return 0;
}