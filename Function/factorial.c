// write the program to calculate factorial of number 

#include<stdio.h>
int fact(int a);
int main(){
    int s = 6;
    printf("The factorial of %d is %d :",s, fact(s));
    return 0 ;
}
int fact(int a){
    if (a==0 || a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
