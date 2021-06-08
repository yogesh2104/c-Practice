// find number of vowels in a string
/**
* * logic
* ! initialize count = 0 ; int i = 0; char str[20]; 
* ! iterate the string using loop till null character   
* ! compare each character with vowels {a,e,i,o,u} 
* ? if equal increments by 1
* ? finally print count
*/

#include <stdio.h>
int main(){
    int i = 0,count = 0;
    char str[20];
    printf("Enter the string: ");
    gets(str);
    while (str[i] != '\0') {
    if(str[i] == 'a' || str[i] == 'A' || 
    str[i] == 'e' || str[i] == 'E' || 
    str[i] == 'i' || str[i] == 'I' || 
    str[i] == 'o' || str[i] == 'O' || 
    str[i] == 'u' || str[i] == 'U')
    count++;
    i++;
  }
  printf("Number of vowels is: %d", count);
    return 0;
}
