    //TODO
    // declare three variables of integer type
    // declare a variable of character type
    // declare two variable of float type
    // declare three variable of type integer for hour, minute, second
    
    // use formatted input/output function to read input and display output
    // use '-' flag, field width = 15 for one integer variable
    // use '0' flag, field width = 15 for second integer variable
    // use '#' flag for third integer variable with hex and octal output

    // read a character from user and store in character variable using formatted I/O function
    // print one float variable with field width = 15
    // print second float variable with .precision (precision = 2)

    // read and store hour, minute, second using ordinary character (:) in pattern

 #include<stdio.h>

 int main(){
     int int1,int2,int3;
     char ch;
     float fl1,fl2;
     int hour,minute,second;
     printf("enter a chracter:");
     scanf("%c",&ch);
     printf("enter three numbers(leave 1 space after each no.):");
     scanf("%d %d %d",&int1,&int2,&int3);
     printf("enter two float numbers(leave 1 space after each floats):");
     scanf("%f %f",&fl1,&fl2);
     printf("enter time in format(hour:minute:second):");
     scanf("%d:%d:%d",&hour,&minute,&second);
     printf("chracter                                =%c\n",ch);
     printf("first number                            =%-15d\n",int1);
     printf("second number                           = %015d\n",int2);
     printf("third number in hex                     =%#x\n",int3);
     printf("third number in oct                     =%#o\n",int3);
     printf("first float numbers with field width 15 =%15f\n",fl1);
     printf("second float number with precision 2    =%.2d\n",fl2);
     printf("the time is: %d:%d:%d",hour,minute,second);
     return 0;
}