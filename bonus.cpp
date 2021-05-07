// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program tells you your salary bonus

#include <iostream>
#include <iomanip>

int main() {
    // this function determines bonus value
    float salary;
    float years;
    float bonus;

    // Input
    std::cout << "Enter your salary ($): ";
    std::cin >> salary;
    std::cout << "\nEnter your years of service: ";
    std::cin >> years;

    // Process and Output

    if (years > 5) {
        bonus = salary * 0.05;
        std::cout << "\nYou get a bonus of $" << std::fixed
        << std::setprecision(2) << bonus << "!" << std::endl;
    } else {
        std::cout << "\nYou get no bonus!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
