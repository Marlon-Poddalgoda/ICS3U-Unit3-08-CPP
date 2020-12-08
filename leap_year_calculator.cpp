// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program determines if a year is a leap year

#include <iostream>
#include <string>

int main() {
    // this function will calculate if a given year is a leap year

    std::cout << "This program determines if a year is "
              << "a leap year" << std::endl;

    // variable declarations
    const int QUADRENNIAL = 4;
    const int CENTENNIAL = 100;
    const int QUADRICENTENNIAL = 400;
    std::string inputYear;
    int inputYearInt;

    // input
    std::cout << "Enter your age as an integer: ";
    std::cin >> inputYear;
    std::cout << "" << std::endl;

    // process
    try {
        inputYearInt = std::stoi(inputYear);

        if (inputYearInt % QUADRENNIAL == 0) {
            if (inputYearInt % CENTENNIAL == 0) {
                if (inputYearInt % QUADRICENTENNIAL == 0) {
                    // output
                    std::cout << inputYearInt << " is a leap year!";
                } else {
                    // output
                    std::cout << inputYearInt << "is not a leap year.";
                }
            } else {
                // output
                std::cout << inputYearInt << " is a leap year!";
            }
        } else {
            // output
            std::cout << inputYearInt << " is not a leap year.";
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a year! Try again." << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Thanks for playing." << std::endl;
}
