---------------Best Practices------------------
include <cstddef>
#include <unordered_map>
#include <utility>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  std::unordered_map<int, std::size_t> seen_at;               //declaring an unordered map
  for (std::size_t i = 0; i < numbers.size(); i++) {              
    int x = numbers[i], y = target - x;
    if (seen_at.count(y) != 0)                              // count function of map returns 1
      return {seen_at[y], i};                               //if there has been an occurence
    seen_at[x] = i;
  }
}
//size_t-----> unsigned integer returned by sizeof() function
----------------------------------------------------
std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  
  std::pair<int,int> p1;
    
    for(auto i=numbers.begin();i!=numbers.end();i++)
    {
      for(auto j=i+1;j<numbers.end();j++){
       if((*j+*i)==target)                              //checking sum
       {
         p1.first=i-numbers.begin();                   // storing index in the pair
         p1.second=j-numbers.begin();
          return p1;
        
               
        }
        
        }
    }
        
      
      
    
}
