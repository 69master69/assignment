// This program reads a number between 3 and 29 and draws an isosceles triangle of 
// side n and of bottom 2n-1.

#include <stdio.h>
#include <stdlib.h>

// Print n times of character c.
void printChar(int n, char c) {
  int i; // Loop vairable.
 
  for (i=0; i<n; i++) printf("%c", c); // Each iteration print one character c.
}

int main(void) {
  int n; // Side of the isosceles triangle.
  int i; // Loop variable.
  
  do {
    printf("\n Enter an integer between 3 and 29: "); // Message for reading an integer. 
    scanf("%d", &n); // Input an integer n. 
  } while (n%2 == 0); // If n is even, read again. 
  
  // Draw the apex point of the triangle.
  printf("\n"); // Print a newline. 
  printChar(n-1, ' '); // 10 blanks and n-1 points from the left apex at the bottom.
  printChar(1, '*'); // Print the apex point.
  printf("\n"); // Print newline.
  
  // Draw the two sides of the triangle.
  for (i = 1; i < n - 1; i++) { // n-2 points between the top and bottom of the triangle.
    printChar(n-i-1, ' '); // 10 blanks and n-i-1 points from the left apex at the bottom.
    printChar(1, '*'); // Print the left side.
    printChar(2*i-1, ' '); // 2*i-1 points between two sides.
    printChar(1, '*'); // Print the rightside.
    printf("\n"); // Print the newline.
  }
  
  printChar(0, ' '); // Print 10 blanks.
  printChar(2*n-1, '*'); // The the bottome, the length is 2*n-1 points.
  printf("\n\n"); // Print two newlines. One empty line after the triangle.
  
  return 0;
}
