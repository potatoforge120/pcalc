#include  <iostream>
#include "laws.hpp"
using namespace std;

int main (int argc, char* argv[]) {

  string flag = argv[1];
   if (flag == "-h"||flag == "help"){
      cout << "usage: calc [flag] [num]" <<endl
       << "Flags: "<<endl
       << "-p  --plus    add two   nums "<<endl
       << "-m  --minus   decrees   nums "<<endl
       << "-d  --divide   divide   nums "<<endl
       << "-mu --multi   multiplay nums "<<endl
       << "-c  --circle  circle area using  radius "<<endl
       << "-sq --square    square finding "<<endl
       << "-t  --triangle   triangle area using base and hight"<<endl ;
  
    return 0 ; 
   }


   if (flag == "-p"||flag == "--plus") {
      double x = atof(argv[2]);
      double y = atof(argv[3]);


      cout <<"= "<< plus_func(x,y) <<endl; 
    }
  if(flag == "-m"||flag == "--minus"){
     double x = atof(argv[2]);
     double y = atof(argv[3]);


cout <<"= "<< minus_func(x,y)<< endl;
  }
  if (flag == "-d"||flag == "--divide"){
    double x = atof(argv[2]);
    double y = atof(argv[3]);


   cout <<"= "<< divide_func(x,y)<< endl;
  }
  if (flag == "-mu"||flag == "--multiplay") {
  double x = atof(argv[2]);
  double y = atof(argv[3]);
  cout <<"= "<< multi_func(x,y)<< endl;
  }
  if (flag == "-sq"||flag == "--square"){
    double x = atof(argv[2]);
    cout <<"= "<< square(x)<<endl;
  }
  if (flag == "-t"|| flag == "--triangle") {
      double x = atof(argv[2]);
      double y = atof(argv[3]);
     cout <<"= "<< triangle(x,y)<< endl;
  }
  if (flag == "-c"||flag == "--circle"){
     double x = atof(argv[2]);
     cout <<"= "<< circle(x)<< endl;
  } 
  return 0;
}
