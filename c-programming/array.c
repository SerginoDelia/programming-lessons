// Array
// a block of memory that contains the same type

#include <stdio.h>

#define MAX_IDS 32

int main() {
  
  // Create an array of 32 elements of int type
  int ids[MAX_IDS] = {0, 1, 2};

  // another way to define arrays
  // int ids[] = {1,2,3}
  
  // print a format string grabbing the element at 0 index
  printf("%d\n", ids[0]);

  // add elements
  ids[3] = 0x41;

  printf("%d\n", ids[3]);
  
  // Compile array
  // gcc -o array array.c
  // ./array

}
