// write a program to print sum and average of two digits


#include<stdio.h>
int main(){
    int a,b;
    float avg;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    int c = a+b;
    printf("The sum of two number is %d\n", c);
    avg = (a+b)/2;
    printf("The average of two number is %f", avg);
    return 0;
}
