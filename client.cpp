//#include "Graph.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//
typedef char ELM;
/*Adding the option to change the precison of slope.
and y-intercept*/
typedef int slope;
typedef int yInt;

slope evalSlope(string equation)
{
  slope equSlope;
  return equSlope;
}

yInt evalYInt(string equation)
{
  yInt equYInt;
  return equYInt;
}


int main()
{
  int xAxisScale = 100;
  cout << "x - Axis Scale: " << xAxisScale << endl;
  string equ = "y = x";
  cout << "Graphing: " << equ << endl;
  slope slopeFun = evalSlope(equ);
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
