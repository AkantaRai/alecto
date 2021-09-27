#include<stdio.h>
int main(){
    int even=0,count=0,num,sum=0;
    printf("How many even numbers do you want?:");
    scanf("%d",&num);
    do{
        printf("%d\t",even);
        sum=sum+even;
        even+=2;
        count++;
    }while(count!=num);
    printf("\nSum is %d.",sum);
    return 0;
}