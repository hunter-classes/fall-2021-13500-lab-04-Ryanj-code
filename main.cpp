/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 4
This program contains the tests for the all functions.
*/

#include <iostream>
#include "shapes.h"
#include "checkerboard.h"

int main(){
  std::cout << "Box:\n";
  std::cout << box(7,4) << "\n";
  std::cout << box(4,5) << "\n";

  std::cout << "Cross:\n";
  std::cout << cross(8) << "\n";
  std::cout << cross(5) << "\n";

  std::cout << "Lower:\n";
  std::cout << lowerTriangle(6) << "\n";
  std::cout << lowerTriangle(3) << "\n";

  std::cout << "Upper:\n";
  std::cout << upperTriangle(5) << "\n";
  std::cout << upperTriangle(8) << "\n";

  std::cout << "Upside-down Trapezoid:\n";
  std::cout << trapezoid(12, 5) << "\n";
  std::cout << trapezoid(5, 3) << "\n";
  std::cout << trapezoid(12, 7) << "\n";

  std::cout << "Checkerboard:\n";
  std::cout << cboard(11, 6) << "\n";
  return 0;
}
