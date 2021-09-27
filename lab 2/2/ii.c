#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1,num2;
    char choice;
    printf("+ for addition\n- for subtraction\n* for multiplication\n/ for division\ne to exit\n");
    scanf("%c",&choice);
    if (choice=='+'){
        printf("enter two number:");
        scanf("%d %d",&num1,&num2);
        printf("Addition=%d",num1+num2);
    }
    else if(choice=='-'){
        printf("enter two number:");
        scanf("%d %d",&num1,&num2);
        printf("subtraction=%d",num1-num2);
    }
    else if(choice=='*'){
        printf("enter two number:");
        scanf("%d %d",&num1,&num2);
        printf("multiplication=%d",num1*num2);
    }
    else if(choice=='/'){
        printf("enter two number:");
        scanf("%d %d",&num1,&num2);
        printf("division=%d",num1/num2);
    }
    else if(choice=='e'){
        exit(0);
    }
    return 0;
}