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

//find factorial using while loop
// #include <stdio.h>

// int main(){
//     int i = 1, num = 7,fact = 1;
//     while (i<=num){
//         fact *=i;
//         i++;
//     }
//     printf("The value of factorial %d is %d",num,fact);
//     return 0;
// }

// prime number
// this not a best way to do that
// #include <stdio.h>

// int main(){
//     int n=1,i, prime=1;
//     for (i=2;i<n;i++){
//         if(n%i==0){
//             prime =0;
//             break;
//         }
//     }
//         if(prime==0){
//             printf("This is not a prime number ");
//         }
//         else{
//             printf("This is prime number.");
//         }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i=2,n=4,prime=1;
//     while(i<n){
//         if (n%i==0){
//             prime==0;
//             break;
//         }
//         i++;
//     }
//     if (prime==0){
//         printf("This is not a prime number.");
//     }
//     else{
//         printf("This is prime number.");
//     }
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

// 3D array

// #include <stdio.h>

// int main(){
//     int i,j,k;
//     int arr[2][2][3] = {{{1,2,3},{4,5,6}},
//                         {{7,8,9},{10,11,12}}};
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             for(k=0;k<3;k++){
//                 printf("%d",arr[0][2][1]);
//             }
//         }
//     }
//     return 0;
// }

// FCFS : AIM : A program to simulate the FCFS CPU scheduling algorithm
// #include <stdio.h>
// #include <conio.h>
// #include <dos.h>
//              void
//              main()
// {
//     int n, b[10], w[10], i, j, h;
//     int stime[10];
//     float avg = 0;
//     printf("JOB SCHEDULING ALGORITHM[FCFS]");
//     printf("\n*****************************************************\n");
//     printf("Enter howmany jobs:");
//     scanf("%d", &n);
//     printf("Enter burst time for corresponding job....");
//     for (i = 0; i < n; i++)
//     {
//         printf("\nProcess %d:", i + 1);
//         scanf("%d", &b[i]);
//     }
//     w[0] = 0;
//     printf("process 1 waiting time is 0");
//     for (i = 1; i < n; i++)
//     {
//         w[i] = b[i - 1] + w[i - 1];
//         printf("\nProcess %d waiting time: %d", i + 1, w[i]);
//         avg += w[i];
//     }
//     printf("\ntotal waiting time:%f", avg);
//     printf("\n\nthe average waiting time is:%f\n", avg / n);
//     getch();
// }

// JOB SCHEDULING ALGORITHM[SJF]
// #include <stdio.h>
// #include <conio.h>
// #include <dos.h>
// void main()
// {
//     int n, b[10], w[10], i, j, h, t, tt;
//     int stime[10], a[10];
//     float avg = 0;
//     printf("JOB SCHEDULING ALGORITHM[SJF]");
//     printf("\n*****************************************************\n");
//     printf("\nEnter howmany jobs:");
//     scanf("%d", &n);
//     printf("\nEnter burst time for corresponding job....\n");
//     for (i = 1; i <= n; i++)
//     {
//         printf("\nProcess %d:", i);
//         scanf("%d", &b[i]);
//         a[i] = i;
//     }
//     for (i = 1; i <= n; i++)
//         for (j = i; j <= n; j++)
//             if (b[i] > b[j])
//             {
//                 t = b[i];
//                 tt = a[i];
//                 b[i] = b[j];
//                 a[i] = a[j];
//                 b[j] = t;
//                 a[j] = tt;
//             }
//     w[1] = 0;
//     printf("\nprocess %d waiting time is 0", a[1]);
//     for (i = 2; i <= n; i++)
//     {
//         w[i] = b[i - 1] + w[i - 1];
//         printf("\nProcess %d waiting time: %d", a[i], w[i]);
//         avg += w[i];
//     }
//     printf("\ntotal waiting time:%f", avg);
//     printf("\n\nthe average waiting time is:%f\n", avg / n);
//     getch();
// }

// Priority
// AIM: - A program to simulate the priority CPU scheduling algorithm.
// PROGRAM: -
// #include <stdio.h>
// #include <conio.h>
// #include <dos.h>
// void main()
// {
//     int n, b[10], w[10], i, j, h, t, tt;
//     int stime[10], a[10], p[10];
//     float avg = 0;
//     printf("\nPRIORITY SCHEDULING ALGORITHM");
//     printf("\n*****************************************************\n");
//     printf("\nEnter howmany jobs:");
//     scanf("%d", &n);
//     printf("\nEnter burst time & priority for corresponding job....\n");
//     for (i = 1; i <= n; i++)
//     {
//         printf("\nProcess %d:", i);
//         scanf("%d %d", &b[i], &p[i]);
//         a[i] = i;
//     }
//     for (i = 1; i <= n; i++)
//         for (j = i; j <= n; j++)
//             if (p[i] < p[j])
//             {
//                 t = b[i];
//                 tt = a[i];
//                 b[i] = b[j];
//                 a[i] = a[j];
//                 b[j] = t;
//                 a[j] = tt;
//             }
//     w[1] = 0;
//     printf("\nprocess %d waiting time is 0", a[1]);
//     for (i = 2; i <= n; i++)
//     {
//         w[i] = b[i - 1] + w[i - 1];
//         printf("\nProcess %d waiting time: %d", a[i], w[i]);
//         avg += w[i];
//     }
//     printf("\ntotal waiting time:%f", avg);
//     printf("\nthe average waiting time is:%f\n", avg / n);
//     getch();
// }

// ROUND ROBIN
// AIM:- A program to simulate the Round Robin CPU scheduling algorithm.
// PROGRAM: -
// #include <stdio.h>
// #include <conio.h>
// int z[10], b[10], n, m[50], r, q, e = 0, avg = 0, i, j;
// float f;
// void main()
// {
//     printf("\nJOB SCHEDULING ALGORITHM[RR]");
//     printf("\n*******************************************************\n");
//     printf("\nEnter how many jobs:");
//     scanf("%d", &n);
//     printf("\nEnter burst time for corresponding job...\n");
//     for (i = 1; i <= n; i++)
//     {
//         printf("Process %d: ", i);
//         scanf("%d", &b[i]);
//         z[i] = b[i];
//     }
//     printf("ENTER THE TIME SLICE VALUE:");
//     scanf("%d", &q);
//     rr();
//     average();
//     getch();
//     return 0;
// }
// rr()
// {
//     int max = 0;
//     max = b[1];
//     for (j = 1; j <= n; j++)
//         if (max <= b[j])
//             max = b[j];
//     if ((max % q) == 0)
//         r = (max / q);
//     else
//         r = (max / q) + 1;
//     for (i = 1; i <= r; i++)
//     {
//         printf("\nround %d", i);
//         for (j = 1; j <= n; j++)
//         {
//             if (b[j] > 0)
//             {
//                 b[j] = b[j] - q;
//                 if (b[j] <= 0)
//                 {
//                     b[j] = 0;
//                     printf("\nprocess %d is completed", j);
//                 }
//                 else
//                     printf("\nprocess %d remaining time is %d", j, b[j]);
//             }
//         }
//     }
//     return 0;
// }
// average()
// {
//     for (i = 1; i <= n; i++)
//     {
//         e = 0;
//         for (j = 1; j <= r; j++)
//         {
//             if (z[i] != 0)
//             {
//                 if (z[i] >= q)
//                 {
//                     m[i + e] = q;
//                     z[i] -= q;
//                 }
//                 else
//                 {
//                     m[i + e] = z[i];
//                     z[i] = 0;
//                 }
//             }
//             else
//                 m[i + e] = 0;
//             e = e + n;
//         }
//     }
//     for (i = 2; i <= n; i++)
//         for (j = 1; j <= i - 1; j++)
//             avg = avg + m[j];
//     for (i = n + 1; i <= r * n; i++)
//     {
//         if (m[i] != 0)
//         {
//             for (j = i - (n - 1); j <= i - 1; j++)
//                 avg = m[j] + avg;
//         }
//     }
//     f = avg / n;
//     printf("\nTOTAL WATING:%d", avg);
//     printf("\n\nAVERAGE WAITING TIME:%f\n", f);
//     for (i = 1; i <= r * n; i++)
//     {
//         if (m[i] != 0)
//             if (i % n == 0)
//             {
//                 printf("P%d", (i % n) + (n));
//             }
//             else
//                 printf("P%d", (i % n));
//         for (j = 1; j <= m[i]; j++)
//             printf("%c", 22);
//     }
//     printf("\n");
//     getch();
//     return 0;
// }




// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     int ms, mp[10], i, temp, n = 0;
//     char ch = 'y';
//     printf("\nEnter the total memory available (in Bytes)-- ");
//     scanf("%d", &ms);
//     temp = ms;
//     for (i = 0; ch == 'y'; i++, n++)
//     {
//         printf("\nEnter memory required for process %d (in Bytes) -- ", i + 1);
//         scanf("%d", &mp[i]);
//         if (mp[i] <= temp)
//         {
//             printf("\nMemory is allocated for Process %d ", i + 1);
//             temp = temp - mp[i];
//         }
//         else
//         {
//             printf("\nMemory is Full");
//             break;
//         }
//         printf("\nDo you want to continue(y/n) -- ");

//         scanf(" %c", &ch);
//     }
//     printf("\n\nTotal Memory Available -- %d", ms);
//     printf("\n\n\tPROCESS\t\t MEMORY ALLOCATED ");
//     for (i = 0; i < n; i++)
//         printf("\n \t%d\t\t%d", i + 1, mp[i]);
//     printf("\n\nTotal Memory Allocated is %d", ms - temp);
//     printf("\nTotal External Fragmentation is %d", temp);
//     getch();
// }

// mft

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// int ms, bs, nob, ef,n, mp[10],tif=0;
// int i,p=0;
// printf("Enter the total memory available (in Bytes) -- ");
// scanf("%d",&ms);
// printf("Enter the block size (in Bytes) -- ");
// scanf("%d", &bs);
// nob=ms/bs;
// ef=ms - nob*bs;
// printf("\nEnter the number of processes -- ");
// scanf("%d",&n);
// for(i=0;i<n;i++)
// {
// printf("Enter memory required for process %d (in Bytes)-- ",i+1);
// scanf("%d",&mp[i]);
// }
// printf("\nNo. of Blocks available in memory -- %d",nob);
// printf("\n\nPROCESS\tMEMORY REQUIRED\t ALLOCATED\tINTERNAL FRAGMENTATION");
// for(i=0;i<n && p<nob;i++)
// {
// printf("\n %d\t\t%d",i+1,mp[i]);
// if(mp[i] > bs)
// printf("\t\tNO\t\t---");
// else
// {
// printf("\t\tYES\t%d",bs-mp[i]);
// tif = tif + bs-mp[i];
// p++;
// } }
// if(i<n)
// printf("\nMemory is Full, Remaining Processes cannot be accomodated");
// printf("\n\nTotal Internal Fragmentation is %d",tif);
// printf("\nTotal External Fragmentation is %d",ef);
// getch();
// }


// // banker algo


// #include<stdio.h>
// struct file
// {
// int all[10];
// int max[10];
// int need[10];
// int flag;
// };
// void main()
// {
// struct file f[10];
// int fl;
// int i, j, k, p, b, n, r, g, cnt=0, id, newr;
// int avail[10],seq[10];
// printf("Enter number of processes -- ");
// scanf("%d",&n);
// printf("Enter number of resources -- ");
// scanf("%d",&r);
// for(i=0;i<n;i++)
// {
// printf("Enter details for P%d",i);
// printf("\nEnter allocation\t -- \t");
// for(j=0;j<r;j++)
// scanf("%d",&f[i].all[j]);
// printf("Enter Max\t\t -- \t");
// for(j=0;j<r;j++)
// scanf("%d",&f[i].max[j]);
// f[i].flag=0;
// }
// printf("\nEnter Available Resources\t -- \t");
// for(i=0;i<r;i++)
// scanf("%d",&avail[i]);
// printf("\nEnter New Request Details -- ");
// printf("\nEnter pid \t -- \t");
// scanf("%d",&id);
// printf("Enter Request for Resources \t -- \t");
// for(i=0;i<r;i++)
// {
// scanf("%d",&newr);
// f[id].all[i] += newr;
// avail[i]=avail[i] - newr;
// }
// for(i=0;i<n;i++)
// {
// for(j=0;j<r;j++)
// {
// f[i].need[j]=f[i].max[j]-f[i].all[j];
// if(f[i].need[j]<0)
// f[i].need[j]=0;
// }
// }
// cnt=0;
// fl=0;
// while(cnt!=n)
// {
// g=0;
// for(j=0;j<n;j++)
// {
// if(f[j].flag==0)
// {
// b=0;
// for(p=0;p<r;p++)
// {
// if(avail[p]>=f[j].need[p])
// b=b+1;
// else
// b=b-1;
// }
// if(b==r)
// {
// printf("\nP%d is visited",j);
// seq[fl++]=j;
// f[j].flag=1;
// for(k=0;k<r;k++)
// avail[k]=avail[k]+f[j].all[k];
// cnt=cnt+1;
// printf("(");
// for(k=0;k<r;k++)
// printf("%3d",avail[k]);
// printf(")");
// g=1;
// }
// }
// }
// if(g==0)
// {
// printf("\n REQUEST NOT GRANTED -- DEADLOCK OCCURRED");
// printf("\n SYSTEM IS IN UNSAFE STATE");
// goto y;
// }
// }
// printf("\nSYSTEM IS IN SAFE STATE");
// printf("\nThe Safe Sequence is -- (");
// for(i=0;i<fl;i++)
// printf("P%d ",seq[i]);
// printf(")");
// y: printf("\nProcess\t\tAllocation\t\tMax\t\t\tNeed\n");
// for(i=0;i<n;i++)
// {
// printf("P%d\t",i);
// for(j=0;j<r;j++)
// printf("%6d",f[i].all[j]);
// for(j=0;j<r;j++)
// printf("%6d",f[i].max[j]);
// for(j=0;j<r;j++)
// printf("%6d",f[i].need[j]);
// printf("\n");
// }
// getch();
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
