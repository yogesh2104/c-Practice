// make three function 1.good morning 2.good afternon 3.good evening
// # include<stdio.h>
// # include<stdlib.h>
// void g_mor();      //function prototype
// void g_af();      //function prototype
// void g_ev();      //function prototype
// int main(){
//     g_mor();
//     return 0;
// }
// void g_mor(){
//     printf("Good morning!\n");
//     g_af(); 
// }
// void g_af(){
//     printf("Good Afternoon!\n");
//     g_ev();
// }
// void g_ev(){
//     printf("Good evening!\n");
// }


// calculate the area of square
// # include<stdio.h>
// # include<stdlib.h>
// void area(int a);

// int main(){
//     area(5);
//     return 0;
// }

// void area(int a){
//     printf("The area of square is %d\n",a*a);
// }




// write the program to calculate factorial of number 
// #include<stdio.h>
// int fact(int a);
// int main(){
//     int s = 6;
//     printf("The factorial of %d is %d :",s, fact(s));
//     return 0 ;
// }
// int fact(int a){
//     if (a==0 || a==1){
//         return 1;
//     }
//     else{
//         return a*fact(a-1);
//     }
// }

// #include<stdio.h>
// void first_num(int n);
// int main(){
//     int n= 1;
//     first_num(n);
//     printf("\n\n");
//     return 0;
// }
// void first_num(int n){
//     if (n<=50){
//         printf("%d",n);
//         first_num(n+1);
//     }
// }

// #include <stdio.h>
// float avg(int a, int b, int c);
// int main(){
//     int a,b,c;
//     // float result;
//     printf("Enter the value of a\n");
//     scanf("%d",&a);
//     printf("Enter the value of b\n");
//     scanf("%d",&b);
//     printf("Enter the value of c\n");
//     scanf("%d",&c);
//     // result=(a+b+c)/3;
//     printf("The average of number is %f",avg(a,b,c));
//     return 0;
// }
// float avg(int a, int b, int c){
//     float result;
//     result = (a+b+c)/3;
//     return result;
// }



// #include<stdio.h>
// // #include<stdlib.h>
// // #include<time.h>
// // int main(){
// //     int number;
// //     srand(time(0));
// //     number =rand()%100 + 1;
// //     printf("The number is %d",number);
// //     return 0;


// #include <stdio.h>
// int main(){
//     int sub1,sub2,sub3,sub4,sub5;
//     float avg,total,per;
//     char grade,operation;
//     printf("What you want like (Total[t], Avgrage[a], Grade[g] Select t,a,g) :");
//     scanf("%c",&operation);
//     printf("Enter 1st subject marks :");
//     scanf("%d",&sub1);
//     printf("Enter 2nd subject marks :");
//     scanf("%d",&sub2);
//     printf("Enter 3rd subject marks :");
//     scanf("%d",&sub3);
//     printf("Enter 4th subject marks :");
//     scanf("%d",&sub4);
//     printf("Enter 5th subject marks :");
//     scanf("%d",&sub5);
//     total = (sub1+sub2+sub3+sub4+sub5);
//     avg = (sub1+sub2+sub3+sub4+sub5)/5;
//     switch(operation)
//     {
//     case 't':
//         printf("Total number of five subject is %f",total);
//         break;
//     case 'a':
//         printf("Average of five subject is %f",avg);
//         break;
//     case 'g':
//         if (avg>=90){
//             printf("You got A grade\n");
//             }
//             else if (avg>=70 && avg<80){
//             printf("You got B grade\n");
//             }
//             else if (avg>=60 && avg<70){
//             printf("You got C grade\n");
//             }
//             else if (avg>=50 && avg<60){
//             printf("You got D grade\n");
//             }
//             else if (avg>=35 && avg<50){
//             printf("You got E grade\n");
//             }
//             else {
//             printf("F grade\n");
//             }
//     default:
//         printf("Error Find!\n");
//         break;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//    int score;

//    printf("Enter score( 0-100 ): ");
//    scanf("%d", &score);

//    switch( score / 10 )
//    {
//    case 10:
//    case 9:
//      printf("Grade: A");
//      break;

//    case 8:
//      printf("Grade: B");
//      break;

//    case 7:
//      printf("Grade: C");
//      break;

//    case 6:
//      printf("Grade: D");
//      break;

//    case 5:
//      printf("Grade: E");
//      break;

//    default:
//      printf("Grade: F");
//      break;

//    }

//    return 0;
// }




// #include <stdio.h>
// #define N 20
// int main(){
//     int a[N],pos=0,neg=0,zero=0,even=0,odd=0,i=0;
//     printf("Enter %d number:",N);
//     for (i=0;i<N;i++){
//         scanf("%d",&a[i]);
//         if(a[i]==0){
//             zero++;
//         }
//         else if(a[i]>0){
//              pos++;
//         }
//         else{
//             neg++;
//         }
//         if (a[i]%2==0){
//             even++;
//         }
//         else{
//             odd++;
//         }
//     }
//         printf("Positive number is %d\n", pos);
//         printf("Negative number is %d\n", neg);
//         printf("Zero number is %d\n",zero);
//         printf("Even number is %d\n",even);
//         printf("Odd number is %d\n",odd);
//     return 0;
// }



// #include <stdio.h>
// void TOH(int n,int A,int B,int C)
// {
//  if(n>0)
//  {
//  TOH(n-1,A,C,B);
//  printf("(%d,%d)\n",A,C);
//  TOH(n-1,B,A,C);
//  }
// }
// int main()
// {
//  TOH(4,1,2,3);
//  return 0; 
// }



// #include <stdio.h>
// int fun(int n){
//     static int x=0;
//     if(n>0){
//         x++;
//         return fun(n-1)+x;
//     }
//     return 0;
// }
// int main(){
//     int a=5;
//     printf("%d",fun(a));
//     return 0;
// }



// write a program to print sum and average of two digits
// #include<stdio.h>
// int main(){
//     int a,b;
//     float avg;
//     printf("Enter First number:");
//     scanf("%d",&a);
//     printf("Enter second number:");
//     scanf("%d",&b);
//     int c = a+b;
//     printf("The sum of two number is %d\n", c);
//     avg = (a+b)/2;
//     printf("The average of two number is %f", avg);
//     return 0;
// }

// write a program to find whether a given number is even or odd

// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter number :");
//     scanf("%d",&a);
//     if (a%2==0){
//         printf("number is even");
//     }
//     else{
//         printf("Number is odd");
//     }
//     return 0;
// }

// write a program to find area of circle

// #include <stdio.h>

// int main(){
//     float r, rad;
//     // clrscr();
//     printf("Enter Radius :");
//     scanf("%f",&r);
//     rad = 2*3.14*r;
//     printf("The area of circle is %f",rad);
//     return 0;
// }

// wap to program to find greatest number among given three integers number

// #include <stdio.h>

// int main(){
//     int num1,num2,num3;
//     printf("Enter first number");
//     scanf("%d",&num1);
//     printf("Enter Second number");
//     scanf("%d",&num2);
//     printf("Enter third number");
//     scanf("%d",&num3);
//     if (num1>=num2 && num1>=num3){
//         printf("%d is greatest number", num1);
//     }
//     if (num2>=num1 && num2>=num3){
//         printf("%d is greatest number", num2);
//     }
//     else{
//         printf("%d is greatest number", num3);
//     }
//     return 0;
// }

// wap to find area of triangle a= (h*b)/2

// #include <stdio.h>

// int main(){
//     int h,b;
//     float area;
//     printf("Enter height :");
//     scanf("%d", &h);
//     printf("Enter Base :");
//     scanf("%d", &b);
//     area = (h*b)/2;
//     printf("The area of tringle is :%f",area);
//     return 0;
// }

// wap to implement mathematical calculator using switch
// #include <stdio.h>

// int main(){
//     int first, second, add;
//     float div, sub, mul;
//     char operation;
//     printf("Select any one operater like (+,-,*,/)");
//     scanf("%c",&operation);
//     printf("Enter First number :");
//     scanf("%d",&first);
//     printf("Enter second number");
//     scanf("%d",&second);
//     switch (operation)
//     {
//     case '+':
//         add = first + second;
//         printf("The sum of two number is %d",add);
//         break;
//     case '-':
//         sub = first - second;
//         printf("The sum of two number is %f",sub);
//         break;
//     case '*':
//         mul = first * second;
//         printf("The sum of two number is %f",mul);
//         break;
//     case '/':
//         div =  second / first ;
//         printf("The sum of two number is %f",div);
//         break;
//     default:
//         printf("Select proper one!!!!!!!!!!!!!!!!!!!!!!");
//         break;
//     }
//     return 0;
// }

// wap to enter five sub marks and calculate avg, total,grade.(using if else)
// #include <stdio.h>

// int main(){
//     int sub1,sub2,sub3,sub4,sub5;
//     float avg,total,per;
//     char grade;
//     printf("Enter 1st subject marks :");
//     scanf("%d",&sub1);
//     printf("Enter 2nd subject marks :");
//     scanf("%d",&sub2);
//     printf("Enter 3rd subject marks :");
//     scanf("%d",&sub3);
//     printf("Enter 4th subject marks :");
//     scanf("%d",&sub4);
//     printf("Enter 5th subject marks :");
//     scanf("%d",&sub5);
//     total = sub1+sub2+sub3+sub4+sub5;
//     avg = (sub1+sub2+sub3+sub4+sub5)/5;
//     per = (total/500)*100;
//     printf("Total number of five subject is %f\n",total);
//     printf("Average of five number is %f\n",avg);
//     if (avg>=90){
//         printf("You got A grade");
//     }
//     else if (avg>=70 && avg<80){
//        printf("You got B grade");
//     }
//     else if (avg>=60 && avg<70){
//        printf("You got C grade");
//     }
//     else if (avg>=50 && avg<60){
//        printf("You got D grade");
//     }
//     else if (avg>=35 && avg<50){
//        printf("You got E grade");
//     }
//     else {
//         printf("F grade");
//     }
//     return 0;
// }

// wap to enter five sub marks and calculate avg, total,grade.(using switch)

// #include <stdio.h>

// int main(){
//     int sub1,sub2,sub3,sub4,sub5;
//     float avg,total,per;
//     char grade,operation;
//     printf("What you want like (Total[T], Avgrage[A], Grade[G] Select T,A,G) :");
//     scanf("%c",&operation);
//     printf("Enter 1st subject marks :");
//     scanf("%d",&sub1);
//     printf("Enter 2nd subject marks :");
//     scanf("%d",&sub2);
//     printf("Enter 3rd subject marks :");
//     scanf("%d",&sub3);
//     printf("Enter 4th subject marks :");
//     scanf("%d",&sub4);
//     printf("Enter 5th subject marks :");
//     scanf("%d",&sub5);
//     total = sub1+sub2+sub3+sub4+sub5;
//     avg = (sub1+sub2+sub3+sub4+sub5)/5;
//     switch (operation)
//     {
//     case ('t' & 'T'):
//         printf("Total number of five subject is %f",total);
//         break;
//     case ('a' & 'A'):
//         printf("Average of five subject is %f",avg);
//         break;
//     case ('g' & 'G'):
//         if (avg>=90){
//             printf("You got A grade\n");
//             }
//             else if (avg>=70 && avg<80){
//             printf("You got B grade\n");
//             }
//             else if (avg>=60 && avg<70){
//             printf("You got C grade\n");
//             }
//             else if (avg>=50 && avg<60){
//             printf("You got D grade\n");
//             }
//             else if (avg>=35 && avg<50){
//             printf("You got E grade\n");
//             }
//             else {
//             printf("F grade\n");
//             }
//     default:
//         printf("Error Find!\n");
//         break;
//     }
//     return 0;
// }

// wap to find greatest number by using ternary operator
// #include <stdio.h>

// int main(){
//     int a,b,greatest;
//     printf("Enter Two number :");
//     scanf("%d%d",&a,&b);
//     greatest=a>b?a:b;
//     printf("%d is greatest number", greatest);
//     return 0;
// }

// wap to implement goto statement
/* about goto statement 
goto is also konw as jump satement.
used to transfer program control to predefine label.
goto example */
// #include <stdio.h>
// int main(){
//     int num,i=1;
//     printf("Enter number you want to print table :");
//     scanf("%d",&num);
//     table:
//     printf("%d X %d = %d\n",num,i,num*i);
//     i++;
//     if(i<=10)
//     goto table ;
//     }

// #include <stdio.h>
// int main(){
//     int sum = 0,i;
//     for (i=0;i<=10;i++){
//             sum=sum+i;
//             if (i==5){
//                 goto addition;
//             }}
//     addition:
//     printf("%d",sum);
// }

// #include <stdio.h>
// int main(){
//     int num,i;
//     for (i = 0; i <8; i++) {
//         printf("%d\n",i);
//         for (int j = 0; j <10; j++){
//             printf("Enter 0 to exit :");
//             scanf("%d",&num);
//             if (num==0){
//                 goto end;
//             }
//         }

//     }
//     end:
//     return 0;
// }

// wap to print name 5 time uing loop

// #include <stdio.h>
// int main(){
//     char i;
//     for (i=0; i< 5; i++){
//         printf("My name is Yogesh.\n");
//     }
//     return 0;
// }

// wap to print name 5 time uing loop

// #include <stdio.h>

// int main(){
//     int i=1;
//     do{
//         printf("My name is Yogesh.\n");
//         i++;
//     }
//     while(i<=5);
//     return 0;
// }

// wap to print digit from 1 to 10

// #include <stdio.h>

// int main(){
//     int i=1;
//     while(i<=10){
//         printf("The digits is %d\n",i);
//         i++;
//     }
//     return 0;
// }

// wap to print table of given number

// #include <stdio.h>

// int main(){
//     int num,i;
//     printf("Enter number you want to print table :\n");
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//         printf("%d X %d = %d\n",num,i,num*i);
//     }
//     return 0;
// }

// wap to print table form 1 to 10

// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=10;i++){
//         for(j=1;j<=10;j++){
//             printf("%d X %d = %d\t",i,j,j*i);
//         }
//         printf("\t");
//     }
//     return 0;
// }

// wap to print reverse number of given digit

// #include <stdio.h>

// int main(){
//     int num;
//     int rvs=0, remainder;
//     printf("Enter number :");
//     scanf("%d",&num);
//     while(num !=0){
//         remainder = num % 10;
//         rvs = rvs * 10 + remainder;
//         num /= 10;
//     }
//     printf("Revers number = %d",rvs);
//     return 0;
// }

// wap to find number is palindrome or not

// #include <stdio.h>

// int main(){
//     int num;
//     int rvs=0, remainder,orgnum;
//     printf("Enter number :");
//     scanf("%d",&num);
//     orgnum=num;
//     while(num !=0){
//         remainder = num % 10;
//         rvs = rvs * 10 + remainder;
//         num /= 10;
//     }
//     if (orgnum==rvs){
//         printf("%d is palindrome number",orgnum);
//     }
//     else{
//         printf("%d is not palindrome number",orgnum);
//     }

//     return 0;
// }

// wap to find number whether number is armstrong or not

// #include <stdio.h>

// int main(){
//     int num,orgnum,rmdnum,result=0;
//     printf("Enter the number :");
//     scanf("%d",&num);
//     orgnum = num;
//     while (orgnum != 0){
//         rmdnum = orgnum % 10;
//         result += rmdnum*rmdnum*rmdnum;
//         orgnum /= 10;
//     }
//     if(result == num){
//         printf("%d is Armstrong number",num);
//     }
//     else{
//         printf("%d is not Armstrong number",num);
//     }
//     return 0;
// }

// wap to check number is prime or not

// #include <stdio.h>
// #include <math.h>

// int main(){
//     int n,i,flag = 1;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     for(i=2; i <= sqrt(n); i++){
//         if(n % i == 0){
//             flag = 0;
//             break;
//         }
//     }
//     if(n <= 1)
//         flag = 0;
//     else if(n==2)
//         flag = 1;
//     if(flag == 1){
//         printf("%d is a prime number.",n);
//     }
//     else{
//         printf("%d is not a prime number.",n);
//     }
//     return 0;
// }

// wap to find factorial of given number

// #include <stdio.h>

// int main(){
//     int n,i;
//     unsigned long long fact = 1;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     if(n<0){
//         printf("Error! find check again negative number is not have factorial");
//     }
//     else{
//         for(i=1; i<=n; ++i){
//             fact *= i;
//         }
//         printf("Factorial of %d = %llu",n,fact);
//     }

//     return 0;
// }

// wap to swap tow number without using third variable.

// #include <stdio.h>

// int main(){
//     int first,second;
//     printf("Enter First number :");
//     scanf("%d",&first);
//     printf("Enter Second number :");
//     scanf("%d",&second);
//     // for example first=10 and second=20
//     first=first+second; //first=30
//     second=first-second;  //second=10
//     first=first-second;  //first=20
//     printf("\nAfter swap First=%d Second=%d",first,second);
//     return 0;

// }

// wap to swap a number with third variable.
// #include <stdio.h>

// int main(){
//     int a,b,temp;
//     printf("Enter first number :");
//     scanf("%d",&a);
//     printf("Enter second number :");
//     scanf("%d",&b);
//     temp = a;
//     a=b;
//     b=temp;
//     printf("After swap a=%d b=%d",a,b);
//     return 0;
// }

// wap to print the given whether a number is positive or not

// #include <stdio.h>

// int main(){
//     int a;
//     printf("Enter the number positive or negative :");
//     scanf("%d",&a);
//     if (a<0){
//         printf("number is Negative.");
//     }
//     else{
//         printf("Number is Positive.");
//     }
//     return 0;
// }

// wap to print the sum of digits of given number

// #include <stdio.h>

// int main(){
//     int n,sum=0,m;
//     printf("Enter number :");
//     scanf("%d",&n);
//     while(n>0){
//         m=n%10;
//         sum=sum+m;
//         n=n/10;
//     }
//     printf("Sum is =%d",sum);
//     return 0;
// }

// wap to traverse of 1-D array element

// #include <stdio.h>
// void printarray(int* arr, int n){
//     int i;
//     printf("Array: ");
//     for (i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[]={2,-1,5,6,0,-3,};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printarray(arr,n);
//     return 0;
// }

// 2d array
// #include <stdio.h>

// int main(){
//     int i,j;
//     int arr[2][3]={{1,2,3},
//     {4,5,6}};
//     for(i=0;i<2;i++){
//         for(j=0;j<3;j++){
//             printf("%d",arr[i][j]);
//         }
//     }
//     return 0;
// }




// sachin sir question
// write a program to find leap year
// #include<stdio.h>
// int main(){
//     int year ;
//     printf("Enter Year :");
//     scanf("%d",&year);
//     if (year % 100 == 0 && year % 4 == 0 && year % 400 == 0){
//         printf("%d is leap year",year);
//     }
//     else{
//         printf("%d is not leap year", year);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     float cel;
//     printf("Enter the degrees celsius :");
//     scanf("%f", &cel);
//     printf("Degrees into fahreheit is %f", (cel*9/5)+32);
//     return 0;
// }



// sachin sir question
// write a program to print the grade on avgrage

// #include <stdio.h>
// int main(){
//     int a,b,c;
//     float avg;
//     printf("Enter three number :");
//     scanf("%d%d%d",&a,&b,&c);
//     avg = (a+b+c)/3;
//     if (avg<84 && avg>75){
//         printf("Distinction");
//     }
//     else if (avg<74 && avg>65)
//     {
//         printf("First class");
//     }
//     else if (avg<64 && avg>50)
//     {
//         printf("Second class");
//     }
//     else if (avg<35 && avg>49)
//     {
//         printf("Third class");
//     }
//     else {
//         printf("Fail!!! Try again");
//     }
//     return 0;
// }



/*Sum of n natural number. */


// #include <stdio.h>
// int sum(int n){
//     if (n==0)
//     return 0;
// }
//     return sum(n-1)+n;
// int main(){
//     int a;
//     a = sum(10);
//     printf("The sum is %d",a);
//     return 0;
// }

// direct formula

// #include <stdio.h>
// int sum(int n){
//     return n*(n+1)/2;
// }
// int main(){
//     int a;
//     a = sum(10);
//     printf("The sum is %d",a);

//     return 0;
// }


// factorial number

// #include <stdio.h>
// int fat(int n){
//     if (n==0){
//         return 1;
//     }
//         return fat(n-1)*n; 
// }
// int main(){
//     int a;
//     a=fat(4);
//     printf("The Factorial of numebr is %d",a);
//     return 0;
// }


// Exponent of any number
// #include <stdio.h>
// #include<math.h>
// int powe(int m, int n){
//     if (n==0){
//         return 1;
//     }
//     else{
//         return powe(m, n-1)*m;
//     }
// }
// int main(){
//     int a;
//     a=powe(3,4);
//     printf("Exponent is %d",a);
//     return 0;
// }

// Taylor series

// #include <stdio.h>

// int taylorS(int m, int n){
//     static int p=1;
//     int f=1; 
//     int r;
//     if(n==0){
//         return 1;
//     }
//     else{
//         r = taylorS(m, n-1);
//         p = p*m;
//         f = f*n;
//         return r+p/f;
//     }
// }
// int main(){
//     int a;
//     a = taylorS(2,10);
//     printf("taylor Series is %d",a);
//     return 0;
// }


// #include<stdio.h>
// double e(int x, int n)
// {
//  static double p=1,f=1;
//  double r;

//  if(n==0)
//  return 1;
//  r=e(x,n-1);
//  p=p*x;
//  f=f*n;
//  return r+p/f;
// }
// int main()
// {
//  printf("%lf \n",e(2,10));
//  return 0;
// }



// Reduced taylor series power
// #include<stdio.h>
// double e(int x, int n)
// {
//  static double s;
//  if(n==0)
//  return s;
//  s=1+x*s/n;
//  return e(x,n-1);

// }
// int main()
// {
//  printf("%lf \n",e(2,10));
//  return 0;
// }



// nCr using Recursion(Combination)

// #include <stdio.h>
// int fact(int n)
// {
//  if(n==0)return 1;
//  return fact(n-1)*n;
// }
// int nCr(int n,int r)
// {
//  int num,den;

//  num=fact(n);
//  den=fact(r)*fact(n-r);

//  return num/den;
// }
// int main()
// {
//  printf("The nCr value is %d \n",nCr(9,3));
//  return 0;
// }

// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//     int *arr;
//     arr = malloc(1000*sizeof(int));
//     printf("%d",arr);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a=5;
//     while(a>=3){
//         printf("Rabbit");
//         break;
//     }
//     printf("green");
// }

// #include <stdio.h>

// int main(){
//     int a=32;
//     do{
//         printf("%d",a);
//         a++;
//     }
//     while(a<=30);
//     return 0;
// }


// #include <stdio.h>

// int main(){

//     int k,j;
//     for(k=1;j=10;k<=5;k++){
//         printf("%d",(k+j));
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a=10,b,c;
//     b=a++;
//     c=++a;
//     printf("%d%d%d",a,b,c);
//     return 0;
// }













// Search in array
// #include <stdio.h>
// int main(){
//     int i,size,search,find=0,time=1;
//     int arr[20];
//     printf("Enter size of array between 1 to 20 :");
//     scanf("%d",&size);
//     printf("ENTER NUMBER:");
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter number to search:");
//     scanf("%d",&search);
//     for(i=0;i<size;i++){
//         if(arr[i]==search){
//             find=1;
//             time++;
//             break;
//         }
//     }
//     if(find == 1){
//         printf("%d find at position %d and %d",search,i+1,time);
//     }
//     else{
//         printf("%d is not find",search);
//     }
// }





// Sorted array
// #include <stdio.h>

// int main(){
//     int arr[100];
//     int i,j,temp,n;
//     printf("Enter array size :");
//     scanf("%d",&n);
//     printf("Enter Number :");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Original array is :");
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if (arr[i]>arr[j]){
//             temp =arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             }
//         }
//     }
//     printf("\nSorted array is :");
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
// }









// #include <stdio.h>
// int main(){
//     int arr[5];
//     int i,j,temp;
//     printf("Enter number in array :");
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Original array is :");
//     for(i=0;i<5;i++){
//         printf("%d",arr[i]);
//     }
//     for(i=0;i<5;i++){
//         for(j=0;j<5;j++){
//             if (arr[i]<arr[j]){
//             temp =arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             }
//         }
//     }
//     printf("\nSorted array is :");
//     for(i=0;i<5;i++){
//         printf("%d",arr[i]);
//     }
// }



// #include <stdio.h>
// #include<conio.h>
// int main(){
//     char name[20];
//     int i=0;
//     printf("Enter the name: ");
//     gets(name);
//     for(i=0;name[i]!='\0';i++){
//         printf("%c",name[i]);
//     }
//     printf("\nlenght of string %d",i);
//     return 0;
// }




// find number of vowels in a string
/**
* * logic
* ! initialize count = 0 ; int i = 0; char str[20]; 
* ! iterate the string using loop till null character   
* ! compare each character with vowels {a,e,i,o,u} 
* ? if equal increments by 1
* ? finally print count
*/



// #include <stdio.h>
// int main(){
//     int i = 0,count = 0;
//     char str[20];
//     printf("Enter the string: ");
//     gets(str);
//     while (str[i] != '\0') {
//     if(str[i] == 'a' || str[i] == 'A' || 
//     str[i] == 'e' || str[i] == 'E' || 
//     str[i] == 'i' || str[i] == 'I' || 
//     str[i] == 'o' || str[i] == 'O' || 
//     str[i] == 'u' || str[i] == 'U')
//     count++;
//     i++;
//   }
//   printf("Number of vowels is: %d", count);
//     return 0;
// }


