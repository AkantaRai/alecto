#include<stdio.h>
int main (){
    int num,i,j,count=0,count1=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            count1++;
        }
            count=0;
    }
    printf("Total prime number:%d",count1);
    return 0;
}