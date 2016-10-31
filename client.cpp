//#include "Graph.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
//#include <stdio.h>

using namespace std;

//
typedef char ELM;
/*Adding the option to change the precison of slope and y-intercept*/
typedef int slope;
typedef int yInt;

/*
Purpose: To evaulate the slope using the equation that was passed, by reference, into function. (No manipulation of the equation is need, so memory can be saved.)
Parameters: The equation gathered by main is going to be passed to this function, by reference as a string.

Output: The return value will be of type slope (typedef int).
*/
slope evalSlope(string &equation)
{
  //Instantiating a slope for a return value of the function. The default slope is set to 1 if digits aren't found before 'x'.
  slope equSlope = 1;
  //True for positive, false for negative
  bool sign = true;
  bool zSlope = true;
  //Debug display statement for definite evaluation.
  cout << "Evaulting the Slope for ";
  for(int i = 0; i < equation.size(); i++)
  {
    cout << equation[i] << " ";
  }
  cout << endl;
  //Checking to see if the funciton is in the form y = mx + b starting with y.
  if(equation[0] == 'y')
  {
    //Searching through whole equation...
    for(int i = 0; i < equation.size(); i++)
    {
      //...until it find x. The is always to the left of x.
      if(equation[i] == 'x')
      {
        //Once x is found the slope can not be undefined the zSlope flag is set to false.
        zSlope = false;
        //This funciton requires a loop to search backwards through the equation to find the digits that make up the slope.
        for(int j = i; j > 0; j--)
        {
          //Once it finds an '-' the slope is without a doubt negitive.
          if(equation[j] == '-')
          {
            sign = false;
            //Negative sign was found slope is negative the sign flag is set to false.
          }
          //Reguardless of spacing between x and the last digit of slope it will only evaluate when it finds a digit, which has to be the last digit of the slope.
          if(isdigit(equation[j]))
          {
            cout << "Tracer 3: " << equation[j] << endl;
            //Need to convert to integer from string index subtracking the ascii value of a char that coresponds with the actual integer value.
            equSlope = equation[j] - 48;
            cout << "Tracer 4: " << equSlope << endl;
            //This is used to determine what place value that digit is in. starts at one because the digit right before last digit is always the tens place. (i.e. x*10 = x0 + [last digit] = slope)
            int powerOfTen = 1;
            //The while condition is set to see if the preivous value is a digit to continue to evaluate.
            while(isdigit(equation[j-1]))
            {
              //Decrementing to continue backwards finding other digits of the slope.
              j--;
              cout << "Current Index: " << j << endl;
              //When another digit is found it will evaulate it's place value.
              if(isdigit(equation[j]))
              {
                cout << "Current Digit: " << equation[j] << endl;
                cout << "Evaluation : " << equation[j] - 48 << " * (10" << "^" << powerOfTen << ")" << endl;
                equSlope = equSlope + ((equation[j] - 48) * pow(10, powerOfTen));
                cout << "Current Slope Eval: " << equSlope << endl;
                powerOfTen++;
              }
            }
            cout << "Tracer 5: " << equSlope << endl;
          }
        }

      }
      //<!-- This will be better implemented for more complex functions --!>
    }
  }
  if(!sign)
  {
    equSlope = equSlope * -1;
  }
  else if(zSlope)
  {
    equSlope = 0;
  }
  cout << "Slope Final Evalute: " << equSlope << endl;
  return equSlope;
}

yInt evalYInt(string &equation)
{
  yInt equYInt;
  for(int i = 0; equation.size(); i++)
  {
    if(equation[i] == 'x')
    {
      for(int j = 0; j > equation.size(); j++)
      {
        if(isdigit(equation[j]))
        {
          equYInt = equation[j];
          while(isdigit(equation[j+1]))
          {

          }

        }

      }
    }
  }
  return equYInt;
}


int main()
{
  int xAxisScale = 100;
  int yAxisScale = 100;
  cout << "x - Axis Scale: " << xAxisScale << endl;
  cout << "y - Axis Scale: " << yAxisScale << endl;
  string equ = "y = 123213x + 923847";
  cout << "Graphing: " << equ << endl;
  slope equSlope = evalSlope(equ);
  cout << "Slope: " << equSlope << endl;
  //yInt yIntFun = evalYInt(equ);



/*
  for(int i = 0; i > xAxisScale; i++)
  {
    vector<ELM> xAxis
  }
*/

  //vector<ELM> xAxis;
  //vector<xAxis> yAxis;

  return 0;
}
