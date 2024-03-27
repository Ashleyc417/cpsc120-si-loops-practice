#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int main() {
  // Example 1: Find the sum of all the even numbers in a vector called
  // "numbers".
  std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // TODO: Find the sum of all even elements in the vector. Then, print it out.
  // (Hint: sum = 30)

  // Example 2: Find the factorial of a number using a while loop
  // In general, the factorial of a positive integer n, denoted as n!,
  // is calculated as follows: n! = n × (n - 1) × (n - 2) × ... × 2 × 1)
  // TODO: Declare a variable to store the user's input.

  // TODO: Declare and Initialize a variable for the factorial.
  // Think about what we need to set factorial to.
  // (Hint: Anything * 0 = 0)

  // TODO: Ask for the users input and store it in num.

  // TODO: Find the factorial of the user's number.
  // (Only calculate the factorial if the user enters a positive integer.)

  // Example 3: Guess the number game using a do-while loop
  srand(time(0));                     // Initialize random seed
  int secretNumber = rand() % 10 + 1; // Generate random number between 1 and 10

  // TODO: Write a program that has a user guess a "secretNumber" from 1-10.
  // The user has to guess the number. Provide feedback after each guess
  // (too high, too low, or correct).

  return 0;
}
