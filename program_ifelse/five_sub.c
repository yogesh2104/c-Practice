
// wap to enter five sub marks and calculate avg, total,grade.(using if else)

#include <stdio.h>

int main(){
    int sub1,sub2,sub3,sub4,sub5;
    float avg,total,per;
    char grade;
    printf("Enter 1st subject marks :");
    scanf("%d",&sub1);
    printf("Enter 2nd subject marks :");
    scanf("%d",&sub2);
    printf("Enter 3rd subject marks :");
    scanf("%d",&sub3);
    printf("Enter 4th subject marks :");
    scanf("%d",&sub4);
    printf("Enter 5th subject marks :");
    scanf("%d",&sub5);
    total = sub1+sub2+sub3+sub4+sub5;
    avg = (sub1+sub2+sub3+sub4+sub5)/5;
    per = (total/500)*100;
    printf("Total number of five subject is %f\n",total);
    printf("Average of five number is %f\n",avg);
    if (avg>=90){
        printf("You got A grade");
    }
    else if (avg>=70 && avg<80){
       printf("You got B grade");
    }
    else if (avg>=60 && avg<70){
       printf("You got C grade");
    }
    else if (avg>=50 && avg<60){
       printf("You got D grade");
    }
    else if (avg>=35 && avg<50){
       printf("You got E grade");
    }
    else {
        printf("F grade");
    }
    return 0;
}