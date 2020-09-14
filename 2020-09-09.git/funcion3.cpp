
#include<iostream>
#include<cstdlib>

double average(double x, double y);

int main( int argc, char *argv[])
{
  double x = std::atof(argv[1]);
  double y = std::atof(argv[2]);
  double z=0;
  z = average( x,y);
  std::cout << z << std::endl;
  return 0;
}

double average(double x, double y)
{
  double result = 0;
  result = 0.5*(x+y);
  return result;
}