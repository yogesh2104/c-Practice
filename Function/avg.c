// write a program to calculate avg

#include <stdio.h>
float avg(int a, int b, int c);
int main(){
    int a,b,c;
    float result;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);
    result=(a+b+c)/3;
    printf("The average of number is %f",avg(a,b,c));
    return 0;
}
float avg(int a, int b, int c){
    float result;
    result = (a+b+c)/3;
    return result;
}
