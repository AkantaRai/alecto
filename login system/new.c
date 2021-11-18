#include<stdio.h>
#include<conio.h>
int main (){
    char i;
    printf("enter:");
    i=getch();
    if (i=='a'){
        printf("apple");
    }
    else if(i=='b'){
        printf("banana");
    }
    else{
        printf("cat");
    }
    return 0;
}