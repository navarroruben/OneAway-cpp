// Ruben Navarro
// 12/10/2019
// main.cpp
// CTCI - One Away
// Given two strings, checks to see if editing is 1 or 2 steps away. Returns true for 1 edit, false if otherwise.

#include <iostream>
#include <string>
#include "prototypes.h"

int main() {

    std::string str = "Test44";
    std::string str2 = "tes";

    // converts string characters to all lower case
    str = uncapString(str);
    str2 = uncapString(str2);

    // ensures that strings are not empty
    if (check_empty(str, str2) == 0) {
        std::cout << "Error: String is empty\n";
        return 0;
    }

    // checks lengths of string to ensure no more than 1 edit need to be made
    if (check_str_lengths(str, str2) == 0) {
        std::cout << "Error: More than 2 edits need to be made\n";
        return 0;
    }

    // checks if both strings are equal
    if (comparison(str, str2)) {
        std::cout << "Error: Strings are identical, no edits needed.\n";
        return 0;
    }

    // checks both strings in other to see how many edits must be made
    if (edit_check(str, str2) == 0) {
        std::cout << "Not a valid edit\n";
    }
    else
        std::cout << "Valid edit\n";

    return 0;
}
