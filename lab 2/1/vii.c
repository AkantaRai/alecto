#include<stdio.h>
#include<math.h>
int main(){
    int coef_a,coef_b,coef_c;
    float root1,root2;
    printf("enter coefficient(a,b,c):");
    scanf("%d %d %d",&coef_a,&coef_b,&coef_c);
    root1=(-(float)coef_b+sqrt(coef_b*coef_b-4*coef_a*coef_c))/(2*coef_a);
    root2=(-(float)coef_b-sqrt(coef_b*coef_b-4*coef_a*coef_c))/(2*coef_a);
    printf("%.3f and %.3f are two roots",root1,root2);
    return 0;
}