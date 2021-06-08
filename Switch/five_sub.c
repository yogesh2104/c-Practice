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