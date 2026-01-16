#include  <iostream>
#include "laws.hpp"
#include "solver.hpp"
using namespace std;
int main (int argc, char *argv[]) {
  if (argc > 1) {
    string argument = argv[1];
    if (argument == "-h"||argument == "--help")
    {
cout << "Usage: pcalc [expression]" << endl;
            cout << "\nOptions:" << endl;
            cout << "  -h, --help    Show this help message" << endl;
            cout << "  -v            Show version information" << endl;
            
            cout << "\nMath Examples:" << endl;
            cout << "  pcalc 10+5" << endl;
            cout << "  pcalc 10x5" << endl;
            cout << "  pcalc 10/2" << endl;

            cout << "\nGeometry Functions:" << endl;
            cout << "  pcalc sqr:5       (Square of 5)" << endl;
            cout << "  pcalc cir:10      (Area of circle with radius 10)" << endl;
            cout << "  pcalc tri:3,4     (Area of triangle with base 3, height 4)" << endl;
            
            cout << "\nComplex Example:" << endl;
            cout << "  pcalc 10x2+sqr:5" << endl;    }
    else if (argument == "-v") {
     cout<< "calc-cli v1.5"<<endl;
    }
    else{
    
        solve_math(argv[1]);
        cout << endl;
    }
    }
   else {
        cout << "Please provide a math problem! -h or --help for help" << endl;
    }
  return 0;
}
