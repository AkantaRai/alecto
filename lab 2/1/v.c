#include<stdio.h>
int main(){
    int num1,num2,num3,num4;
    printf("enter four number:");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    if (num1<num2&&num1<num3&&num1<num4){
        printf("%d is smallest.",num1);
    }
    else if(num2<num3&&num2<num4){
        printf("%d is smallest.",num2);
    }
    else if(num3<num4){
        printf("%d is smallest.",num3);

    }
    else{
        printf("%d is smallest.",num4);
    }
    return 0;
}