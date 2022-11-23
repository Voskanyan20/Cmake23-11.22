#include <iostream>
#include "calc.h"


int calc(int a, int b, char c){
   switch (c)
   {
   case '+':
      return a + b;
   case '-':
      return a - b;
   case '*':
      return a * b;
   case '/':
      return a / b;
   default:
      return 0;
   }

}