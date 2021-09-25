/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 4
This program contains the tests for the all functions.
*/

#include <iostream>
#include "shapes.h"

int main(){
  std::cout << "Box:\n";
  std::cout << box(4,4) << "\n";
  std::cout << box(5,3) << "\n";

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
  std::cout << trapezoid(5, 12) << "\n";
  std::cout << trapezoid(3, 5) << "\n";
  std::cout << trapezoid(7, 12) << "\n";
  return 0;
}
