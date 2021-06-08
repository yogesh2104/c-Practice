#include <stdio.h>
#define N 20
int main(){
    int a[N],pos=0,neg=0,zero=0,even=0,odd=0,i=0;
    printf("Enter %d number:",N);
    for (i=0;i<N;i++){
        scanf("%d",&a[i]);
        if(a[i]==0){
            zero++;
        }
        else if(a[i]>0){
             pos++;
        }
        else{
            neg++;
        }
        if (a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
        printf("Positive number is %d\n", pos);
        printf("Negative number is %d\n", neg);
        printf("Zero number is %d\n",zero);
        printf("Even number is %d\n",even);
        printf("Odd number is %d\n",odd);
    return 0;
}



// write a program to find whether a given number is even or odd

#include <stdio.h>
int main(){
    int a;
    printf("Enter number :");
    scanf("%d",&a);
    if (a%2==0){
        printf("number is even");
    }
    else{
        printf("Number is odd");
    }
    return 0;
}
