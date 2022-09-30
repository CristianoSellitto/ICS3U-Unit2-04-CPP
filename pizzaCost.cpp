// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in September 2022
// A program that finds the cost of a pizza, using user inputted diameter

#include <iostream>
#include <iomanip>

const float LABOUR_COST = 0.75;
const float MATERIALS = 0.5;
const float HST = 0.13;
const int SHOP_RENT = 1;
double diameterOfPizza;
double subtotal;
double total;

int main() {
    std::cout << "Enter the diameter of the pizza (in): ";
    std::cin >> diameterOfPizza;
    std::cout << std::endl;
    subtotal = LABOUR_COST + SHOP_RENT + (MATERIALS * diameterOfPizza);
    total = subtotal + (subtotal * HST);
    std::cout << std::endl;
    std::cout << "The cost of this pizza is $" << std::fixed;
    std::cout << std::setprecision(2) << std::setfill('0');
    std::cout << total << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
