#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1,num2;
    char choice;
    printf("+ for addition\n- for subtraction\n* for multiplication\n/ for division\ne to exit\n");
    scanf("%c",&choice);
    switch(choice){
        case '+':
        printf("enter two number:");
        scanf("%d %d",&num1,&num2);
        printf("Addition=%d",num1+num2);
        break;
        case '-':
        printf("enter two number:");
        scanf("%d %d",&num1,&num2);
        printf("subtraction=%d",num1-num2);
        break;
        case '*':
        printf("enter two number:");
        scanf("%d %d",&num1,&num2);
        printf("multiplication=%d",num1*num2);
        case '/':
        printf("enter two number:");
        scanf("%d %d",&num1,&num2);
        printf("division=%d",num1/num2);
        break;
        case 'e':
        exit(0);
    }
    return 0;
}