int FindOutlier(std::vector<int> arr)
{
    int len;
    int num,num1,num2;
    len=arr.size();
    int i;
    for( i=0;i<len-1;)
    {
      num=~(arr[i]^arr[i+1]);                                      // XNOR of two numbers will be 1 if the last bit is same
                                                                   // Taking AND operation if the result is true
      if(num&1)
        i++;
      else
        break;                                                     // else breaking the loop if the last bits are different
    }
    if(i==0)                                                       // boundary condition for the first element
    {
      num1=(arr[i]^arr[i+2]);
      num2=(arr[i+1]^arr[i+2]);
      if(num1&1)
        return arr[i];
      else return arr[i+1];
      
    }
    num1=(arr[i]^arr[i-1]);
    num2=(arr[i+1]^arr[i-1]);
    if(num1&1)
      return arr[i];
    else return arr[i+1];
    
    
   
}
