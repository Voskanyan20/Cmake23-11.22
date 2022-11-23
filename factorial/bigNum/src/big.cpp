#include <iostream>
#include <string>
#include "big.h"

int* bigNumb(char s)
{
    int x = s.size(), a = 0;
 
    int arr = new int[s.size()];
 
        while (a != x) {
 
    
        arr[a] = s[a] - '0';
        a++;
    }
 
    return arr;
}