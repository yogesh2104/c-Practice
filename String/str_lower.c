// convert the string into lower case
      /**
       * ! in this problem we use ASCII value
       * @brief  
       * for loop is used to convert the string into lower case string and if 
       * block is used to check that if characters are in upper case then, 
       * convert them in lower case by adding 32 from their ASCII value
       *          If (str[i] >= 'A' and str[i] <= 'Z') then 
       *              str[i] ← str[i] + 32;
       * 
       */
      #include <stdio.h>
      #include <string.h>
      int main() {
        char str[100];
        int i;
        printf("Enter a string : ");
        gets(str);
        for (i = 0; str[i]!='\0'; i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
              str[i] = str[i] + 32;
            }
        }
        printf("String in lower Case = %s", str);
        return 0;
      }
