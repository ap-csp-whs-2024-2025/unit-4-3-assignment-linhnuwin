#include <cmath>     // std::abs, std::sqrt, std::pow
#include <cstdlib>   // std::srand, std::rand
#include <ctime>     // std::time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
 // 1. define variables
 std::string operation;
 double number1, number2;

    // 2. getting user input
    std::cout << "Enter First Number: " << std::endl;
    std::cin >> number1;
    std::cout << "Enter Operation (+, -, *, /): " << std::endl;
    std::cin >> operation;
    std::cout << "Enter Second Number: " << std::endl;
    std::cin >> number2;
    std::cout << "Answer: " << std::endl;

    //if else state checking entered operation
    if (operation == "+")
    {
      std::cout << number1 + number2;
    }
    else if (operation == "-")
    {
      std::cout << number1 - number2;
    }
    else if (operation == "/")
    {
      std::cout << number1 / number2;
    }
    else if (operation == "*")
    {
      std::cout << number1 * number2;
    }
    else
    {
      std::cout << "Not a recognized operation! ";
    }
}
