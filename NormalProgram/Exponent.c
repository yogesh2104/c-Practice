
// Exponent of any number
#include <stdio.h>
#include<math.h>
int powe(int m, int n){
    if (n==0){
        return 1;
    }
    else{
        return powe(m, n-1)*m;
    }
}
int main(){
    int a;
    a=powe(3,4);
    printf("Exponent is %d",a);
    return 0;
}