// Taylor series

#include <stdio.h>

int taylorS(int m, int n){
    static int p=1;
    int f=1; 
    int r;
    if(n==0){
        return 1;
    }
    else{
        r = taylorS(m, n-1);
        p = p*m;
        f = f*n;
        return r+p/f;
    }
}
int main(){
    int a;
    a = taylorS(2,10);
    printf("taylor Series is %d",a);
    return 0;
}





// Reduced taylor series power
#include<stdio.h>
double e(int x, int n)
{
 static double s;
 if(n==0)
 return s;
 s=1+x*s/n;
 return e(x,n-1);

}
int main()
{
 printf("%lf \n",e(2,10));
 return 0;
}

