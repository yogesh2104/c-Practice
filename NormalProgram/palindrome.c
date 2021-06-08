// wap to find number is palindrome or not

#include <stdio.h>

int main(){
    int num;
    int rvs=0, remainder,orgnum;
    printf("Enter number :");
    scanf("%d",&num);
    orgnum=num;
    while(num !=0){
        remainder = num % 10;
        rvs = rvs * 10 + remainder;
        num /= 10;
    }
    if (orgnum==rvs){
        printf("%d is palindrome number",orgnum);
    }
    else{
        printf("%d is not palindrome number",orgnum);
    }

    return 0;
}