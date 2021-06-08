
// wap to print the given whether a number is positive or not

#include <stdio.h>

int main(){
    int a;
    printf("Enter the number positive or negative :");
    scanf("%d",&a);
    if (a<0){
        printf("number is Negative.");
    }
    else{
        printf("Number is Positive.");
    }
    return 0;
}
