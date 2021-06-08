
#include <stdio.h>
#include<conio.h>
int main(){
    char name[20];
    int i=0;
    printf("Enter the name: ");
    gets(name);
    for(i=0;name[i]!='\0';i++){
        printf("%c",name[i]);
    }
    printf("\nlenght of string %d",i);
    return 0;
}
