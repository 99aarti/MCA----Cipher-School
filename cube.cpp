#include <iostream>

// Function definition for cube using call by reference
void cube(int& n) {
  n = n * n * n;
}

int main() {
  // Declare integer variable and initialize to 2
  int num = 4;

  // Print the original value of num
  std::cout << "The original value of num: " << num << std::endl;

  // Call the cube function with the num variable
  cube(num);

  // Print the updated value of num
  std::cout << "The cube of num is: " << num << std::endl;

  return 0;
}
