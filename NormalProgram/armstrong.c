// wap to find number whether number is armstrong or not

#include <stdio.h>

int main(){
    int num,orgnum,rmdnum,result=0;
    printf("Enter the number :");
    scanf("%d",&num);
    orgnum = num;
    while (orgnum != 0){
        rmdnum = orgnum % 10;
        result += rmdnum*rmdnum*rmdnum;
        orgnum /= 10;
    }
    if(result == num){
        printf("%d is Armstrong number",num);
    }
    else{
        printf("%d is not Armstrong number",num);
    }
    return 0;
}