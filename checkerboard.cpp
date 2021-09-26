/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 4
This program contains all the checkerboard functions.
*/

#include <iostream>
#include "checkerboard.h"

std::string cboard(int w, int h){
  std::string s = "";
  int x = 0;
  
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if((j + x) % 2 == 0){
	s += "*";
      } // Using mod to alternate between adding * and spaces to s.
      else{
	s += " ";
      }
    }
    s += "\n";
    x++;
  } // Adding \n after every line and increment x for spaces between *.

  return s;
}

std::string cboard3x3(int w, int h){
  std::string s = "";
  int stars = 0;
  int spaces = 0;
  
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(stars < 3){
	s += "*";
	stars++;
      }
      if(space < 3){
	s += " ";
	space++;
      }
      if(stars == 3){
	stars = 0;
      }
      if(space == 3){
	space = 0;
      }
    }
    s += "\n";
  }

  return s;
}
