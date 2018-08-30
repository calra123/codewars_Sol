#include<cmath>
bool is_square(int n)
{
  if(n<0)
  return false;
  float num;
  num=sqrt(n);
  int n1;
  n1=num;
  
  if((num-n1)==0)                                                 // can be achieved by fmod;
       return true;                                              //checking the difference between sqrt of a number in
                                                                 // float as well as int
    
  else return false;
    
}
-------------------------------------------------------------------------------------
best practices
#include <cmath>

bool is_square(int n)
{
  return fmod(sqrt(n), 1) == 0;
}
