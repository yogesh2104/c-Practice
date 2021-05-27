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