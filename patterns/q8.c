
// 54321
// 4321
// 321
// 21

// 1
// 12
// 123
// 1234
// 12345


#include<stdio.h>
int main(){
    int i,j;
    for(i=5;i>=2;i--){
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}