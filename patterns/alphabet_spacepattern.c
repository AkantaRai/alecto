//    e
//   de
//  cde
// bcde
//abcde
#include<stdio.h>
int main(){
    int i,j;
    for(i=69;i>=65;i--){
        for(j=65;j<=i;j++){
            printf(" ");
        }
        for(j=i;j<=69;j++){
            printf("%c",j);
        }
        printf("\n");

    }
    return 0;
}