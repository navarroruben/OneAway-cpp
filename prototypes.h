// Ruben Navarro
// 12/10/2019
// prototypes.h
// CTCI - One Away
// Given two strings, checks to see if editing is 1 or 2 steps away. Returns true for 1 edit, false if otherwise.

#include <string>
#include <map>
#include <list>

#ifndef PROTOTYPES_H
#define PROTOTYPES_H

bool check_empty(std::string, std::string);
bool check_str_lengths(std::string, std::string);
bool comparison(std::string, std::string);
bool edit_check(std::string, std::string);
std::string uncapString(std::string);

#endif // PROTOTYPES_H
