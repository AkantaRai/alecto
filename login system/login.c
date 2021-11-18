#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct user{
    char username[20];
    char email[20];
    char pw[20];
}u1;
FILE *fptr;
FILE *pwfptr;
char password[20];
void pass(){
    int i=0;
    char ch1;
    while(1){
        ch1=getch();
        if (ch1==13){
            u1.pw[i]='\0';
            break;
        }
        else if (ch1==8){
            if (i==0){
              continue;  
            }
            i--;
            u1.pw[i]='\0';
            printf("\b \b");
        }
        else{
            u1.pw[i++]=ch1;
            printf("* \b");
        }
    }
}
void delay(){
    delay(100);
}
void signin(){
    printf("enter username:");
        scanf("%s",&u1.username);
        printf("enter email:");
        scanf("%s",&u1.email);
        printf("enter password:");
        pass();
        fptr=fopen("username.txt","w");
        fprintf(fptr,"%s",u1.username);
        fclose(fptr);
        fptr=fopen("email.txt","w");
        fprintf(fptr,"%s",u1.email);
        fclose(fptr);
        pwfptr=fopen("pw.txt","w");
        fprintf(pwfptr,"%s",u1.pw);
        fclose(fptr);
}
int main(){
    int choice;
    char choice1;
    char saved_pw[20],saved_username[20],pw[20],username[20];
    printf("\t\t\t\t\tPACMAN\n")
    label:
    printf("1.play\n2.option\n3.exit");
    scanf("%d",&choice);
    system("cls");
    switch(choice){
    case 1:
    pwfptr=fopen("pw.txt","r");
    if (pwfptr==NULL){
        printf("sign in first!!...\n");    
        signin();
        sys("cls");
        goto label;
    }
    system("cls");
    printf("username:");
    scanf("%s",&username);
    printf("password:");
    pass();
    fptr=fopen("username.txt","r");
    fscanf(fptr,"%s",&saved_username);
    fptr=fopen("pw.txt","r");
    fscanf(fptr,"%s",&saved_pw);
    if(0==strcmp(username,saved_username)&&0==strcmp(u1.pw,saved_pw)){
        printf("\nwelcome ,%s!!!",saved_username);
    }
    break;
    case 3:
    printf("closing game....");
    delay();
    exit(0);
    }
    
    return 0;
}