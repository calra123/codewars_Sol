using namespace std;
std::vector<int> bubbleSortOnce(const std::vector<int> &input)
{   
    int temp;
    vector<int> inpu;
    inpu=input;                  //copying one vector into another
    
    for(auto p=inpu.begin();p<inpu.end()-1;p++)
    {
      
      if(*p>*(p+1))
      {
       iter_swap(p,p+1);      //iter_swap(first_iterator,second_iterator)
                              //normal swap doesn't work using pointer etc
      }
        
    }
    return inpu;
}
-------------------------------------------------------------------
/*
Array swap works if iterator is int and not vector<int>
Ex-
for(int p=0;-----){
temp=inpu[p];
inpu[p]=inpu[p+1];
inpu[p+1]=temp;}*/
