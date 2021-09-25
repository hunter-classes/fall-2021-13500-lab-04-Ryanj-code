/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 4
This program contains the tests for the all functions.
*/

#include <iostream>
#include "checkerboard.h"

std::string cboard(int w, int h){
  std::string s = "";
  int x = 0;
  
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w + 2; j++){
      if((j + x) % 2 == 0){
	s += "*";
      }
      else{
	s += " ";
      }
    }
    s += "\n";
    x++;
  }

  return s;
}
