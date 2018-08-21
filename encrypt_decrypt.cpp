
#include <iostream>
#include<string>
using namespace std;

std::string encrypt(std::string text, int n)
{
int len;
len=text.size();
text=text.erase(len-1,len-1);
if(n<=0)
  return text;
else
{
  int j=0;
 
    while(j<n)
    {
       std:: string s1,s2;
        for(int i=0;i<len;i++)
        {
        if(i%2==0)
          s2+=text[i];
        else
          s1+=text[i];
          
        }
    text=s1+s2;
  
    j++;
    }
 }
return text+='!';
}
 
std::string decrypt(std::string encryptedText, int n)
{
  
if(n<=0)
  return encryptedText;
else
  {
  int len=encryptedText.size();
  
 cout<<len;
  int len1,j=0;
  len1=len/2;
  while(j<n)
  {
       std:: string str,s1,s2,s3,s4;
    for(int i=0,k=len1; i<len1&&k<len;i++,k++)    //for len is even, equally divided*
    { 
      
       s1=encryptedText.at(k);                 
                                               // convert char to strings implicit conversion
       s2=encryptedText.at(i);                // s.at() gives character and character concatenation produced garbage values
       
        
      str=s1.append(s2);                      // concatenating s1 + s2 and storing them into s3
      s3+=str;
    
    }
    
    if(len%2!=0)
    {
    	s4=encryptedText.at(len-1);       //*otherwise last character got left out when len is odd
    	encryptedText=s3+s4;              // adding last char as string
    }
   
    else encryptedText=s3;
  
  }
    
    return encryptedText;
    }
}
#include<string>
int main()
{
    string text;
    string output;
    getline(cin,text);            // for input with spaces
    int n;
    cin>>n;
    output=decrypt( text, n);
    std:: cout<<output;
    return 0;
}
