/*
  UB C Programming Unit 1 Lesson 2 Program 10
  Salary Calculator
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  float salary, hours, finalPay; //initialize variables as float

  printf("This program allows you to enter your salary and how many hours you worked. The program will then output how much you made during those hours. You will get two prompts:\n\t- Salary: Enter how much you make per hour\n\t- Hours Worked: Enter how many hours you worked\n"); //Intructions
  
  printf("Salary: $"); //ask user for slarary
  scanf("%f", &salary); //accept user input and format as float
  printf("Hours Worked: "); //ask user for hours worked
  scanf("%f", &hours); //accept user input and format as float

  finalPay = salary * hours; //find pay for hours worked

  printf("You made $%0.2f for %0.2f hours worked.", finalPay, hours); //output pay for hours worked
  
  return 0;
}