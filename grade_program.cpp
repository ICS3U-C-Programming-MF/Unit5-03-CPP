// copyright Maximiliano Fairman Dec 9th, 2025
// all rights reserved
// this program uses a function that takes a level
// and returns the middle percentage mark.

#include <iostream>
#include <string>

int calcMark(std::string level) {
    int mark = -1;

    if (level == "Level 4+") {
        mark = 97;  // A+
    } else if (level == "Level 4") {
        mark = 90;  // A
    } else if (level == "Level 4-") {
        mark = 83;  // A-
    } else if (level == "Level 3+") {
        mark = 78;  // B+
    } else if (level == "Level 3") {
        mark = 74;  // B
    } else if (level == "Level 3-") {
        mark = 71;  // B-
    } else if (level == "Level 2+") {
        mark = 68;  // C+
    } else if (level == "Level 2") {
        mark = 65;  // C
    } else if (level == "Level 2-") {
        mark = 61;  // C-
    } else if (level == "Level 1+") {
        mark = 58;  // D+
    } else if (level == "Level 1") {
        mark = 55;  // D
    } else if (level == "Level 1-") {
        mark = 51;  // D-
    } else {
        mark = -1;  // Invalid input
    }

    return mark;
}

int main() {
    std::string level;

    std::cout << "Enter the level (Level 1-, Level 1, Level 1+, ..., Level 4+): ";
    std::getline(std::cin, level);

    int result = calcMark(level);

    if (result == -1) {
        std::cout << "Invalid level entered." << std::endl;
    } else {
        std::cout << "Middle percentage mark: " << result << std::endl;
    }

    return 0;
}
