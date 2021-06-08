// wap to program to find greatest number among given three integers number

#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter Second number");
    scanf("%d",&num2);
    printf("Enter third number");
    scanf("%d",&num3);
    if (num1>=num2 && num1>=num3){
        printf("%d is greatest number", num1);
    }
    if (num2>=num1 && num2>=num3){
        printf("%d is greatest number", num2);
    }
    else{
        printf("%d is greatest number", num3);
    }
    return 0;
}
