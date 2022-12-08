// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : December 2022
// ICS3U-Unit5-04.cpp File, learning functions with parameters in C++.

#include <iostream>
#include <string>
#include <cmath>

float area(float radiusAsFloat, float heightAsFloat) {
    // variables
    float volume;

    // aprocess and output
    volume = pow(radiusAsFloat, 2) * heightAsFloat * M_PI;
    return volume;
}

int main() {
    // creating variables
    std::string(radius);
    std::string(height);
    float radiusAsFloat;
    float heightAsFloat;
    float volume;

    // input
    std::cout << "Enter the radius of a cylinder(cm): ";
    std::cin >> radius;
    std::cout << "Enter the height of a cylinder(cm): ";
    std::cin >> height;
    std::cout << "\n";

    // process
    try {
        radiusAsFloat = std::stof(radius);
        heightAsFloat = std::stof(height);
        if (radiusAsFloat <= 0 || heightAsFloat <= 0) {
            std::cout << "A cylinder cannot have a height or "
                      << "a base with a value that's equal or less than 0.";
        } else {
            volume = area(radiusAsFloat, heightAsFloat);
            volume = 100 * round(volume) / 100.0;
            std::cout
                << "The volume of the cylinder is " << volume << " cm³.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again.";
    }

    std::cout << "\n\n\nDone.\n";
}
