/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 3
This program contains the function that takes in two numbers height and width, and prints a box containing those characteristics.
*/

#include <iostream>
#include "shapes.h"

std::string box(int w, int h){
  std::string s = "";
  
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      s += "*";
    } 
    s += "\n";
  } // Two for loops that adds w number of *s then \n and repeats h times.
  
  return s;
}

std::string cross(int x){
  std::string s = "";
  
  for(int i = 0; i < x; i++){
    for(int j = 0; j < x; j++){
      if(i == j || j == x - (i + 1)){
	s += "*";
      } // If row == col or col - (row + 1), add * to s.
      else{
      s += " ";
      } // Else, add a space to s.
    }
    s += "\n";
  }
  
  return s;
}

std::string lowerTriangle(int x){
  std::string s = "";
  int n = 0; // The variable that increments to add more * to s.

  for(int i = 0; i < x; i++){
    n++;
    for(int j = 0; j < n; j++){
      s += "*";
    }
    s += "\n";
  } // The for loops that adds \n and more * per cycle to s.
  
  return s;
}

std::string upperTriangle(int x){
  std::string s = "";
  int n = x + 1; // The variable that decrements to add less * to s.

  for(int i = 0; i < x; i++){
    n--;
    for(int j = 0; j < n; j++){
      s += "*";
    }
    s += "\n";
  } // The for loops that adds \n and less * per cycle to s.

  return s;
}

std::string trapezoid(int w, int h){
  std::string s = "";
  int spaces = 0;
  int stars = w;
  
  if(w -((h - 1) * 2) <= 0){
    s = "Impossible shape!\n";
    return s;
  } // If height is impossibly large for the width return impossible shape.

  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(spaces > j){
	s += " ";
      }
    } // Add spaces only when spaces > j.
    for(int k = 0; k < stars; k++){
      s += "*";
    } // Add * based on what stars current value is.
    spaces += 1;
    stars -= 2;
    s += "\n";
  } // Increase number of spaces added while decreasing number of stars added
  
  return s;
}
