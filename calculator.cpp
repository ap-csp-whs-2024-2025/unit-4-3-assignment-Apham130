#include <cmath>     // std::abs, std::sqrt, std::pow
#include <cstdlib>   // std::srand, std::rand
#include <ctime>     // std::time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
  std::srand(std::time(0));  // seeding our random number generator
  double num1;
  double num2;

  std::cout << "Welcome to C++ Calculator!  Choose an option below!\n";

  int user_input;
  while (user_input != 99)
  {
    std::cout << std::endl
              << "0. Random Number Generator\n"        
              << "1. Add\n"
              << "2. Subtract\n"
              << "3. Multiply\n"
              << "4. Divide\n"
              << "5. Square root\n"
              << "99. Quit\n\n> ";
    std::cin >> user_input;

    if (user_input == 0) //Roll random number
    {
      int bound;
      std::cout << "\nPick the bound (any integer >1)\n> ";
      std::cin >> bound;
      int random_number = (std::rand() % bound) + 1;  // random numbers between 1 and 6
      std::cout << "\nYou rolled a " << random_number << "!\n";
    }
    else
    {
      if (user_input == 1) //Addition
      {
        std::cout << "\nEnter two numbers\n> ";
        std::cin >> num1;
        std::cout << "> ";
        std::cin >> num2;
        std::cout << "\nThe sum is " << (num1 + num2) << "!\n";
      }
      else
      {
        if (user_input == 2)   //Subtraction
        {
          std::cout << "\nEnter Minuend\n> ";
          std::cin >> num1;
          std::cout << "Enter Subtrahend\n>";
          std::cin >> num2;
          std::cout << "\nThe difference is " << (num1 - num2) << "!\n";
        }
        else
        {
          if (user_input == 3) //Multiplication
          {
            std::cout << "\nEnter two numbers\n> ";
            std::cin >> num1;
            std::cout << "> ";
            std::cin >> num2;
            std::cout << "\nThe product is " << (num1 * num2) << "!\n";
          }
          else
          {
            if (user_input == 4)  //Division
            {
              std::cout << "\nEnter Dividend\n> ";
              std::cin >> num1;
              std::cout << "Enter Divisor\n> ";
              std::cin >> num2;
              if (num2 != 0)
              {
                std::cout << "\nThe quotient is " << (num1 / num2) << "!\n";
              }
              else
              {
                std::cout << "\nYou can't do that silly! I hope you feel stupid right now :)\n";
              }
            }
            else
            {
              if (user_input == 5)  //Square Root
              {
                std::cout << "\nEnter a number\n> ";
                std::cin >> num1;
                if (num1 > 0)
                {
                  std::cout << "\nThe square root is " << std::sqrt(num1) << "!\n";
                }
                else
                {
                  std::cout << "\nDon't you feel like a fool? LLLLLLLL\n";
                }
              }
            }
          }
        }
      }
    }
  }
  std::cout << "\nThank you for using the C++ Calculator!\n";
  return 0;
}
