// wap to print the sum of digits of given number

#include <stdio.h>

int main(){
    int n,sum=0,m;
    printf("Enter number :");
    scanf("%d",&n);
    while(n>0){
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("Sum is =%d",sum);
    return 0;
}
