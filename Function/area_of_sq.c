// calculate the area of square

# include<stdio.h>
# include<stdlib.h>
void area(int a);
int main(){
    area(5);
    return 0;
}
void area(int a){
    printf("The area of square is %d\n",a*a);
}