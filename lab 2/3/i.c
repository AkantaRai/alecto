#include<stdio.h>
#include<stdlib.h>
int main (){
    int length ,breadth,choice;
    printf("Choose the following:\n1. Area of rectangle\n2. Perimeter of rectangle\n3. exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("enter lenght and breadth:");
        scanf("%d %d",&length,&breadth);
        printf("Area=%d",length*breadth);
        break;
        case 2:
        printf("enter lenght and breadth:");
        scanf("%d %d",&length,&breadth);
        printf("Perimeter=%d",2*(length+breadth));
        break;
        case 3:
        exit(0);
    }
    return 0;
}