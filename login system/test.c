#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    int i=0;
    char c[15];
    printf("enter:");    
    while (1){
        
        ch=getch();
        if (ch==13){
            c[i]='\0';
            break;
        }
        else if(ch==8){
            if(i==0){
                continue;
            }    
        i--;
        c[i]='\0';
        printf("\b \b");
        }
        else{
            c[i++]=ch;
            printf("*");
        }
    }
    printf("\n%s",c);
    return 0;
}