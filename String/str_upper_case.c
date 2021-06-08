// convert the string into upper case

#include <stdio.h>
#include <string.h>
int main() {
   char str[100];
   int i;
   printf("Enter a string : ");
   gets(str);
   for (i = 0; str[i]!='\0'; i++) {
      if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] -32;
      }
   }
   printf("String in Upper Case = %s", str);
   return 0;

      /**
       * ! in this problem we use ASCII value
       * @brief  
       * for loop is used to convert the string into upper case string and if 
       * block is used to check that if characters are in lower case then, 
       * convert them in upper case by subtracting 32 from their ASCII value
       *          If (str[i] >= 'a' and str[i] <= 'z') then 
       *              str[i] = str[i] - 32;
       * 
       */

}
