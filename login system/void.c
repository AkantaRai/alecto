#include<stdio.h>
char name[20];
void nam(){
    printf("hi,%s",name);
}
int main(){
    printf("what is your name?");
    scanf("%s",&name);
    nam();
    return 0;
}