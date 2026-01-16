#include <iostream>
#include <sstream>
#include "laws.hpp"
#include "solver.hpp"
#include <cstdlib>
using namespace std;
double get_num (stringstream& ss){
  double value;
  if(isalpha(ss.peek())){
    string func_name ;
    getline(ss,func_name,':');
    if (func_name == "sqr"||func_name == "square"){
     double arg ;
     char clos;
     ss>> arg;
    
     return square(arg);
    }
    else if (func_name == "tri"||func_name== "triangle") {
      double base, hight ;
      char comma, close;
      ss >> base ;
      ss >> comma ;
      ss >> hight;
      
      return triangle(base,hight);
    }
    else if (func_name == "cir"||func_name == "circle") {
      double radius ;
      char close;
      ss >> radius;
      
      //ineed some sleep -_-
      return circle(radius);
      
    }
    else{
      std::cout << "Error:unkown command ' " << func_name <<"'";
      exit(1);

    }
    }
 else{
      ss >> value;
      if(ss.fail()){
        cout << "Error: Expected a number but got garbage." << endl;
            exit(1);
      }
      return value;
  }

return 0;

}
void solve_math(string input) {
 stringstream ss(input);
 double result;
 result = get_num(ss);
 
 char op;
 


 while (ss>> op) {
  double next_num = get_num(ss);
   if (op=='+') {
    result = plus_func(result,next_num);
   }
   else if (op == '-') {
    result = minus_func(result,next_num);
   }
   else if (op == '*'||op == 'x') {
     result = multi_func(result,next_num);
   }
   else if (op == '/') {
     result = divide_func(result,next_num);
   }
 }
 cout <<"= "<<result;

}
