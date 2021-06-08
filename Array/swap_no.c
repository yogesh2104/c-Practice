
// wap to swap tow number without using third variable.

#include <stdio.h>

int main(){
    int first,second;
    printf("Enter First number :");
    scanf("%d",&first);
    printf("Enter Second number :");
    scanf("%d",&second);
    for example first=10 and second=20
    first=first+second; //first=30
    second=first-second;  //second=10
    first=first-second;  //first=20
    printf("\nAfter swap First=%d Second=%d",first,second);
    return 0;

}