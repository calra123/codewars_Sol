------------------------Best practices
class Tortoise
{
public:
    static std::vector<int> race(int v1, int v2, int g) {
      if (v1 >= v2) return {-1,-1,-1};
      int t = g * 3600 / (v2 - v1);
      return {t / 3600, t / 60 % 60, t % 60};
    }
};
-----------------------------------------------------
#include<cmath>
class Tortoise
{
public:
    static std::vector<int> race(int v1, int v2, int g)
    {
      std::vector <int> arr={-1,-1,-1};
      if(v1>v2)
      return arr;
      double h=0.0,m=0.0,s=0.0;
      int h1,m1,s1,t1;
      double time=0.0;
      v2=v2-v1;
      time=(float)g/v2;
    //  std:: cout<<time<<g<<v2<<v1;
      
      t1=time;
      m=(time-t1)*60;
      m1=m;
      m=m-m1;
      
      s=(m)*60;
      s1=s;
      s=s-s1;
       std:: cout<<m<<" "<<s<<" "<<s1;
       std::cout<<std::endl;
      
     if(m>=0.99999 && s>=0.999)      //boundary conditions when seconds and minutes tend to 
      {m1+=1;                        // ---> 1
        s1=0;}
       else if(s>=0.999)
        {s1+=1;}
      std:: vector<int> racer;
      racer.push_back(t1);
      racer.push_back(m1);
      racer.push_back(s1);
      return racer;
      }
      
};
