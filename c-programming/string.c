// Strings
// under the hood a string is just an array of characters

#include <stdio.h>

int main() {
  
  printf("Hello world\n");

  // strings in C are 0 delimited (null terminated), meaning it will print every 
  // character in until it gets to a 0
  char mystr[] = {'h', 'e', 'l', 'l', 'o', 0};

  printf("%s\n", mystr);

}
