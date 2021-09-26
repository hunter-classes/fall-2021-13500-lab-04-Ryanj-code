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
      if((i % 6 < 3 && j % 6 < 3) || (i % 6 >= 3 && j % 6 >= 3)){
        // Only adds * to s if the rows and columns(i and j) will are in the correct position(the if condition) for an * to be placed.  
        if(stars < 3){
	        s += "*";
          stars++;
        } // Adds * if stars is less than 3 and increments stars.
        if(stars == 3){
	        stars = 0;
        } // Resets stars if it == 3.
      }
      else{ // If position is not for an *, add spaces to s.
        if(spaces < 3){
	        s += " ";
	        spaces++;
        } // Adds spaces if spaces is less than 3 and increments stars. 
        if(spaces == 3){
	        spaces = 0;
        } // Resets spaces if it == 3.
      }
    }
    s += "\n";
  } // Adding \n after every line.

  return s;
}
