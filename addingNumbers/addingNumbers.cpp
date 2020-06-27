// addingNumbers.cpp 
//Author: Tasnia Sultana

#include <iostream>

int main()
{ 
    std::cout << "Hello, let's add simple numbers!\n";
    int firstNumber, secondNumber, sumOfTwoNumbers;

    std::cout << "Enter two integers: ";
    std::cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum 
    std::cout <<"Sum is:  "<< firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;

}

