#include <cmath>     // std::abs, std::sqrt, std::pow
#include <cstdlib>   // std::srand, std::rand
#include <ctime>     // std::time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
  std::srand(std::time(0));  // seeding our random number generator


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

    if (user_input == 0) //Roll random numberr
    {
      int bounds;
      std::cout << "Pick the bounds (any n# >1)"
      int random_number = (std::rand() % 6) + 1;  // random numbers between 1 and 6
      std::cout << "\nYou rolled a " << random_number << "!\n";
    }
    else
    {
      if (user_input == 1)
      {
        int num1;
        int num2;
        std::cout << "Enter two numbers\n";
        std::cin >> num1 >> num2;
        std::cout << "\nTheir sum is " << (num1 + num2) << "!\n";
      }
    }
  }
  return 0;
}
