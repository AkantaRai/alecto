#include<stdio.h>
int main (){
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if (age<12){
        printf("CHILD");
    }
    else if(age>=12&&age<20){
        printf("TEEN");
    }
    else if(age>=20&&age<30){
        printf("ADULT");
    }
    else if (age>=30&&age<55){
        printf("YOUNG");
    }
    else if(age>=55){
        printf("OLD");
    }
    return 0;
}