// Ruben Navarro
// 12/10/2019
// definitions.cpp
// CTCI - One Away
// Given two strings, checks to see if editing is 1 or 2 steps away. Returns true for 1 edit, false if otherwise.

#include <string>
#include <list>
#include <iostream>

// converts string characters to all lower case
std::string uncapString(std::string s) {
    std::string s2 = "";

    for (auto c : s)
        s2 += tolower(c);

    return s2;
}

// ensures that strings are not empty
bool check_empty(std::string s, std::string s2) {

    return !(s.empty() && s2.empty());
}

// checks lengths of string to ensure no more than 1 edit need to be made
bool check_str_lengths(std::string s, std::string s2) {
    int sum = 0;
    if (s.length() > s2.length())
        sum = s.length() - s2.length();
    else if (s2.length() > s.length())
        sum = s2.length() - s.length();

    return sum <= 1;
}

// checks if both strings are equal
bool comparison(std::string s, std::string s2) {
    return s == s2;
}

// checks both strings in other to see how many edits must be made
bool edit_check(std::string s, std::string s2) {
    std::cout << "In string: " << s << " and " << s2 << std::endl;

    int count = 0;
    int sum = 0;

    // adds to count if strings are off by 1
    if (s.length() > s2.length())
        sum = s.length() - s2.length();
    else if (s2.length() > s.length())
        sum = s2.length() - s.length();

    if (sum == 1)
        ++count;

    // each char of second string is search through first, if the strings are off by 1 and an edit is found returns false.. else returns true.
    for (auto c : s2) {
        std::cout << "Finding: " << c << " and count: " << count << std::endl;
        size_t found = s.find(c);
        if (found == std::string::npos)
            ++count;

        if (count > 1)
            return false;
    }
    return true;
}