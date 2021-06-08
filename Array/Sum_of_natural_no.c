
/*Sum of n natural number. */


#include <stdio.h>
int sum(int n){
    if (n==0)
    return 0;
}
    return sum(n-1)+n;
int main(){
    int a;
    a = sum(10);
    printf("The sum is %d",a);
    return 0;
}

// direct formula

#include <stdio.h>
int sum(int n){
    return n*(n+1)/2;
}
int main(){
    int a;
    a = sum(10);
    printf("The sum is %d",a);

    return 0;
}
