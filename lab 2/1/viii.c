#include<stdio.h>
int main (){
    int phy,dl,iit,math,c_program,total;
    float percentage;
    printf("enter a marks in Physics:");
    scanf("%d",&phy);
    printf("enter a marks in dl:");
    scanf("%d",&dl);
    printf("enter a marks in maths:");
    scanf("%d",&math);
    printf("enter a marks in IIT:");
    scanf("%d",&iit);
    printf("enter a marks in c-programming:");
    scanf("%d",&c_program);
    total=phy+dl+iit+math+c_program;
    percentage=total/5;
    if (percentage>40){
        printf("passed.\n");
    }
    else{
        printf("failed.");
    }
    if (percentage>80){
        printf("A division.");
    }
    else if (percentage>60){
        printf("B division.");
    }
    else if (percentage>40){
        printf("C division.");
    }
    else{
        printf("D division.");
    return 0;
    }
}