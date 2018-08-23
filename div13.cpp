class Thirteen
{
public:
    static long long thirt(long long n)
    {  
      int arr[]={1,10,9,12,3,4};
      int temp=0;
      int j=0;
      int i=0;
      long long rem=0,spare;
    
      
   while(1)            //when termination is indefinite, infinte loop
   {
   
     rem=0;j=0;
     spare=n;
      while(spare!=0)
      {
        temp=spare%10;
        spare=spare/10;
        rem+=temp*arr[j%6];        //multipling by the rem-cycle of 13
        
        j++;
      }
    if(n==rem)                    //breaking the infinite loop;
      break;
      n=rem;
    }
    return  rem;
    }
};

