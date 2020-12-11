// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program can tell the user what number is larger or smaller, or if both
//    numbers are equal to each other

#include <iostream>
#include <string>

int main()  {
    // this function can determine what number is larger and smaller, or if
    //    both numbers are equal to each other

    std::string firstString;
    std::string secondString;
    int firstNumber;
    int secondNumber;

    std::cout << "This program can figure out what number is larger or smaller,"
              << " or if they are equal." << "\n" << std::endl;

    // input
    std::cout << "Type in your first number: " << std::endl;
    std::cin >> firstString;
    std::cout << "Type in your second number: " << std::endl;
    std::cin >> secondString;
    std::cout << "\n" << std::endl;

    // process and output
    try {
        firstNumber = std::stoi(firstString.c_str());
        secondNumber = std::stoi(secondString.c_str());

        if (firstNumber > secondNumber) {
            std::cout << firstNumber << " is larger than " << secondNumber
                      << std::endl;
        } else if (secondNumber > firstNumber) {
            std::cout << secondNumber << " is larger than " << firstNumber
                      << std::endl;
        } else {
            std::cout << "They are equal to each other" << std::endl;
        }
        }
    catch (std::invalid_argument) {
        std::cout << "This is not a number!" << std::endl;
    }
}
