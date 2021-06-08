
// wap to find factorial of given number

#include <stdio.h>

int main(){
    int n,i;
    unsigned long long fact = 1;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n<0){
        printf("Error! find check again negative number is not have factorial");
    }
    else{
        for(i=1; i<=n; ++i){
            fact *= i;
        }
        printf("Factorial of %d = %llu",n,fact);
    }

    return 0;
}