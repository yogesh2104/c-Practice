
#include<stdio.h>
void first_num(int n);
int main(){
    int n= 1;
    first_num(n);
    printf("\n\n");
    return 0;
}
void first_num(int n){
    if (n<=50){
        printf("%d",n);
        first_num(n+1);
    }
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number;
    srand(time(0));
    number =rand()%100 + 1;
    printf("The number is %d",number);
    return 0;





#include <stdio.h>
int fun(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main(){
    int a=5;
    printf("%d",fun(a));
    return 0;
}


// wap to find greatest number by using ternary operator
#include <stdio.h>

int main(){
    int a,b,greatest;
    printf("Enter Two number :");
    scanf("%d%d",&a,&b);
    greatest=a>b?a:b;
    printf("%d is greatest number", greatest);
    return 0;
}

// wap to implement goto statement
/* about goto statement 
goto is also konw as jump satement.
used to transfer program control to predefine label.
goto example */
#include <stdio.h>
int main(){
    int num,i=1;
    printf("Enter number you want to print table :");
    scanf("%d",&num);
    table:
    printf("%d X %d = %d\n",num,i,num*i);
    i++;
    if(i<=10)
    goto table ;
    }



#include <stdio.h>
int main(){
    int sum = 0,i;
    for (i=0;i<=10;i++){
            sum=sum+i;
            if (i==5){
                goto addition;
            }}
    addition:
    printf("%d",sum);
}

#include <stdio.h>
int main(){
    int num,i;
    for (i = 0; i <8; i++) {
        printf("%d\n",i);
        for (int j = 0; j <10; j++){
            printf("Enter 0 to exit :");
            scanf("%d",&num);
            if (num==0){
                goto end;
            }
        }

    }
    end:
    return 0;
}

// wap to print name 5 time uing loop

#include <stdio.h>
int main(){
    char i;
    for (i=0; i< 5; i++){
        printf("My name is Yogesh.\n");
    }
    return 0;
}

// wap to print name 5 time uing loop

#include <stdio.h>

int main(){
    int i=1;
    do{
        printf("My name is Yogesh.\n");
        i++;
    }
    while(i<=5);
    return 0;
}

// wap to print digit from 1 to 10

#include <stdio.h>

int main(){
    int i=1;
    while(i<=10){
        printf("The digits is %d\n",i);
        i++;
    }
    return 0;
}

// wap to print table of given number

#include <stdio.h>

int main(){
    int num,i;
    printf("Enter number you want to print table :\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n",num,i,num*i);
    }
    return 0;
}

// wap to print table form 1 to 10

#include <stdio.h>

int main(){
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%d X %d = %d\t",i,j,j*i);
        }
        printf("\t");
    }
    return 0;
}

// wap to print reverse number of given digit

#include <stdio.h>

int main(){
    int num;
    int rvs=0, remainder;
    printf("Enter number :");
    scanf("%d",&num);
    while(num !=0){
        remainder = num % 10;
        rvs = rvs * 10 + remainder;
        num /= 10;
    }
    printf("Revers number = %d",rvs);
    return 0;
}


// sachin sir question
// write a program to find leap year
#include<stdio.h>
int main(){
    int year ;
    printf("Enter Year :");
    scanf("%d",&year);
    if (year % 100 == 0 && year % 4 == 0 && year % 400 == 0){
        printf("%d is leap year",year);
    }
    else{
        printf("%d is not leap year", year);
    }
    return 0;
}


#include <stdio.h>

int main(){
    float cel;
    printf("Enter the degrees celsius :");
    scanf("%f", &cel);
    printf("Degrees into fahreheit is %f", (cel*9/5)+32);
    return 0;
}



// sachin sir question
// write a program to print the grade on avgrage

#include <stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("Enter three number :");
    scanf("%d%d%d",&a,&b,&c);
    avg = (a+b+c)/3;
    if (avg<84 && avg>75){
        printf("Distinction");
    }
    else if (avg<74 && avg>65)
    {
        printf("First class");
    }
    else if (avg<64 && avg>50)
    {
        printf("Second class");
    }
    else if (avg<35 && avg>49)
    {
        printf("Third class");
    }
    else {
        printf("Fail!!! Try again");
    }
    return 0;
}





#include <stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    arr = malloc(1000*sizeof(int));
    printf("%d",arr);
    return 0;
}

#include <stdio.h>

int main(){
    int a=5;
    while(a>=3){
        printf("Rabbit");
        break;
    }
    printf("green");
}

#include <stdio.h>

int main(){
    int a=32;
    do{
        printf("%d",a);
        a++;
    }
    while(a<=30);
    return 0;
}


#include <stdio.h>

int main(){

    int k,j;
    for(k=1;j=10;k<=5;k++){
        printf("%d",(k+j));
    }
    return 0;
}

#include <stdio.h>

int main(){
    int a=10,b,c;
    b=a++;
    c=++a;
    printf("%d%d%d",a,b,c);
    return 0;
}
