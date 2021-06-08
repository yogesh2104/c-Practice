// wap to implement mathematical calculator using switch


#include <stdio.h>

int main(){
    int first, second, add;
    float div, sub, mul;
    char operation;
    printf("Select any one operater like (+,-,*,/)");
    scanf("%c",&operation);
    printf("Enter First number :");
    scanf("%d",&first);
    printf("Enter second number");
    scanf("%d",&second);
    switch (operation)
    {
    case '+':
        add = first + second;
        printf("The sum of two number is %d",add);
        break;
    case '-':
        sub = first - second;
        printf("The sum of two number is %f",sub);
        break;
    case '*':
        mul = first * second;
        printf("The sum of two number is %f",mul);
        break;
    case '/':
        div =  second / first ;
        printf("The sum of two number is %f",div);
        break;
    default:
        printf("Select proper one!!!!!!!!!!!!!!!!!!!!!!");
        break;
    }
    return 0;
}
