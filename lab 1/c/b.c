#include<stdio.h>
int main(){
    int male;
    float ratio,female;
    printf("enter number of boys in class:");
    scanf("%d",&male);
    printf("enter number of girls in class:");
    scanf("%f",&female);
    ratio=female/male;
    printf("the ratio of female to male is %.3f",ratio);
    return 0;
}