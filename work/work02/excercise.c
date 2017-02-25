/*
 * Name: Rafiano R. Rubiantoro
 * NPM: 1506689130
 * Class: D
 * Comment: A program that can calculate the product of variables
 */

#define LOOP 5

#include <stdio.h>

void main() {
   int input = 4;
   int hasil = 0;
   int i;

   for (i = 0; i<LOOP; i++) {
      hasil = hasil+input;
   }

   printf("%d times %d equals %d \n", input, LOOP, hasil);
}
