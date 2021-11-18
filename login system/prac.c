#include<stdio.h>
int main(){
    int a=20,b=30,num;
    FILE *fptr;
    fptr=fopen("name.txt","a");
    printf("enter a number:");
    scanf("%d",&num);
    fprintf(fptr,"%d\n",num);
    fclose(fptr);
    fptr=fopen("name.txt","r");
    fscanf(fptr,"%d",&a);
    fclose(fptr);
    printf("number is =%d",a);
    return 0;
}