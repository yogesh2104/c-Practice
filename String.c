// find length of string

#include <stdio.h>
int main()
{
  char str[100];
  int c = 0;

  printf("Enter the string: \n");
  gets(str);

  while (str[c] != '\0')
    c++;

  printf("Length of the string: %d\n", c);

  return 0;
}




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


// Reverse the string 
#include <stdio.h>
int main()
{
  char str[100], rev[100];
  int i, j, count = 0;
  scanf("%s", str);
  printf("String Before Reverse: %s", str);
  //finding the length of the string
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  //reversing the string by swapping
  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }

  printf("String After Reverse: %s", rev);
}