#include <iostream>
#include <string>
#include "big.h"

int* bigNumb(char s)
{
    int x = s.size(), a = 0;
 
    // Create an array to store the big
    // integer into it.
 
    // Make the array size same as the
    // size of string str
    int arr = new int[s.size()];
 
    // Loop to extract string elements
    // into the array one by one
    while (a != x) {
 
        // Subtracting '0' to convert
        // each character into digit
 
        // str[a] - '0'
        // = ASCII(str[a]) - ASCII('0')
        // = ASCII(str[a] - 48
        arr[a] = s[a] - '0';
        a++;
    }
 
    // Return the reference of the array
    return arr;
}