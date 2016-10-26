//#include "Graph.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
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
  //Instantiating a slope for a return value of the function.
  slope equSlope;
  //True for positive, false for negative
  bool sign;
  cout << "Evaulting the Slope for ";
  for(int i = 0; i < equation.size(); i++)
  {
    cout << equation[i] << " ";
  }
  cout << endl;
  //Going throught the whole function
  //cout << equation[2] << endl;
  if(equation[0] == 'y')
  {
    for(int i = 0; i < equation.size(); i++)
    {
      if(equation[i] == 'x')
      {
        cout << "Tracer 1: " << equation[i] << endl;
        for(int j = i; j > 0; j--)
        {
          if(equation[j] == '-')
          {
            sign = false;
            //Negative sign was found slope is negative
          }
          if(isdigit(equation[j]))
          {
            cout << "Tracer 2: " << equation[j] << endl;
            //Need to convert to integer from string index
            equSlope = (int)equation[j];
            cout << "Tracer 3: " << equSlope << endl;
          }
          else if(equation[j - 1] == '+' || equation[j - 1] == '-')
          {
            equSlope = 1;
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
  cout << "Slope Final Evalute: " << equSlope << endl;
  return equSlope;
}

yInt evalYInt(string &equation)
{
  yInt equYInt;
  return equYInt;
}


int main()
{
  int xAxisScale = 100;
  int yAxisScale = 100;
  cout << "x - Axis Scale: " << xAxisScale << endl;
  cout << "y - Axis Scale: " << yAxisScale << endl;
  string equ = "y = 3x"; // + " ."; Was going to add a end marker, not needed anymore.
  cout << "Graphing: " << equ << endl;
  slope equSlope = evalSlope(equ);
  cout << "Slope: " << equSlope << endl;
  yInt yIntFun = evalYInt(equ);



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
