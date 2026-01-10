#include  <iostream>
#include <cmath>
#include "laws.hpp"
using namespace std;
double plus_func(double x , double y) 
{
  return x+y; 
}
double minus_func(double x , double y)
{
 return x-y ; 
}
double multi_func(double x,double y )
{
  return x*y;
}
double divide_func(double x, double y)
{if (y==0){
  cout << "math erorr cant divide by zero"<<endl;
  return 0;
          }
  return x/y;

}
//Laws of geometric
double circle(double x){
 return 3.14159*x*x;
}
double square(double x){
 return  x*x;
}
double triangle(double x, double y){
  return 0.5*x*y;
}
