// wap to swap a number with third variable.
#include <stdio.h>

int main(){
    int a,b,temp;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    temp = a;
    a=b;
    b=temp;
    printf("After swap a=%d b=%d",a,b);
    return 0;
}
