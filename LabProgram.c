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
//     int i;
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
//             printf("%d X %d = %d\n",i,j,j*i);
//         }
//         printf("\n");
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







































































// write a program to find younger in age
// #include <stdio.h>
// int main(){
//     int age1,age2,age3;
//     printf("Enter First person age :");
//     scanf("%d",&age1);
//     printf("Enter Second person age :");
//     scanf("%d",&age2);
//     printf("Enter third person age :");
//     scanf("%d",&age3);
//     if (age1>age2 && age1>age3){
//         printf("%d is younger in age ", age1);
//     }
//     if (age2>age3 && age2>age3){
//         printf("%d is younger in age", age2);
//     }
//     else{
//         printf("%d is younger in age", age3);
//     }
//     return 0;
// }





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



// fcfs in os 
// #include<stdio.h>
// int main(){
//     int n,bt[10],wt[10],tat[10],avtat=0,avwt=0,i,j;
//     printf("Enter total number of process :");
//     scanf("%d",&n);

//     printf("\nEnter Process Brust Time\n");
//     for(i=0;i<n;i++){
//         printf("P[%d]:",i+1);
//         scanf("%d",&bt[i]);
//         }
//     wt[0]=0;
//     for(i=1;i<n;i++){
//         wt[i]=0;
//         for(j=0;j<i;j++){
//             wt[i]+=bt[j];
//         }  
//     }
//     printf("\nProcess\t BurstTime\tWating Time\tTurnaround time");
//     for(i=0;i<n;i++){
//         tat[i]=bt[i]+wt[i];
//         avwt +=wt[i];
//         avtat +=tat[i];
//         printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
//     }
//     avwt/=i;
//     avtat/=i;
//     printf("\n\nAverage Waiting Time :%d",avwt);
//     printf("\nAverage Turnaround Time:%d",avtat);
//     return 0;
// }






















