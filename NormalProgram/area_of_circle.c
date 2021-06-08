// write a program to find area of circle

#include <stdio.h>

int main(){
    float r, rad;
    clrscr();
    printf("Enter Radius :");
    scanf("%f",&r);
    rad = 2*3.14*r;
    printf("The area of circle is %f",rad);
    return 0;
}