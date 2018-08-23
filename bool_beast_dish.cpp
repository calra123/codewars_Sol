#include <string>

bool feast(std::string beast, std::string dish){
bool b1;
int l1=beast.length();
int l2=dish.length();
if(beast[0]==dish[0] && beast[l1-1]==dish[l2-1])  //comparing first and last char
  return b1=true;                                 //using bool
else
  return b1=false;
  //your code here
}
---------------------------------------------------------------
Best practices using front and back in the return statement directly 
clever- Ternary Operator- ( condition) ? true:false;
