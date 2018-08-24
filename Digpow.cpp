---------------------------------------------------------
            Best Practices
class DigPow
{
public:
  static int digPow(int n, int p){
   long long sum=0;
   for(char digit : to_string(n)){
     sum+=pow(digit-'0',p++);
   }
   return (sum/n)*n==sum ? sum/n : -1;
  }
};
--------------------------------------------------------------
#include<cmath>
class DigPow
{
public:
  static int reverse( int n)      // function for reversing the number
  {  
    int rem=0;
    int spare,temp;
    spare=n;
      while(spare!=0 )
    {
      temp=spare%10;
      spare=spare/10;
      rem= rem*10+temp;
     }
     return rem;
  }
  
public:
  static int digPow(int n, int p)
  {
    int n1;
    n1=n;
    n= reverse(n);
    int temp;
    int spare;
    spare=n;
    int ans;
    int sum=0;
    while(spare!=0 )              // calculating the sum
    {
      temp=spare%10;
      spare=spare/10;
      sum+=pow(temp,p);
      
      p++;
    }
  
    int i=1;
    while(1)
    {
      ans=n1*i;                        // comparing it with the multiples of n
     
      if(ans==sum)
      {
        return i;
        break;
      }
      else if(ans>=sum)
      {
        return -1;
        break;
      }
      i++;
    }
  }
};
