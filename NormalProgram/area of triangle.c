
// wap to find area of triangle a= (h*b)/2

#include <stdio.h>

int main(){
    int h,b;
    float area;
    printf("Enter height :");
    scanf("%d", &h);
    printf("Enter Base :");
    scanf("%d", &b);
    area = (h*b)/2;
    printf("The area of tringle is :%f",area);
    return 0;
}