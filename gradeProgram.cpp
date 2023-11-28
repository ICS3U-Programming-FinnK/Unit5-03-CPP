// Created by: Finn Kitor
// Created on: November 28th, 2023
// this program is a grade program that uses return values.
#include <iostream>
#include <string>

// Function for grades
int calc_mark(std::string level) {
    // Converting the level to uppercase for case-insensitive comparison
    for (int i = 0; i < level.size(); i++) {
        level[i] = toupper(level[i]);
    }

    // Checking the level and returning the corresponding middle percentage mark
    if (level == "1-") {
        return 51;
    } else if (level == "1") {
        return 54;
    } else if (level == "1+") {
        return 58;
    } else if (level == "2-") {
        return 61;
    } else if (level == "2") {
        return 64;
    } else if (level == "2+") {
        return 68;
    } else if (level == "3-") {
        return 71;
    } else if (level == "3") {
        return 74;
    } else if (level == "3+") {
        return 78;
    } else if (level == "4-") {
        return 81;
    } else if (level == "4") {
        return 84;
    } else if (level == "4+") {
        return 98;
    } else {
        throw "Invalid level. Please enter a valid level from 1- to 4+.";
    }
}

int main() {
    int mark = 0;
    // User inputs the grade to the terminal
    std::string level_input;
    std::cout << "Enter the level of your grade from 1- to 4+: ";
    std::cin >> level_input;
    try {
        mark = calc_mark(level_input);
        // Display the mark to the user
        std::cout << "The middle percentage mark for level " << level_input << " is " << mark << ".";
    } catch (const char* e) {
        std::cerr << "Error: " << e;
    }
    return mark;
}