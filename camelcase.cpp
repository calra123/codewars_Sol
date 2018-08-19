#include <string>
#include<cstdlib>


std::string to_camel_case(std::string text) {
  int len;
  len=text.length();
  char c;
  int flag=0;
  std:: string str,s;
  str=text;
  int i;
  
  for(i=0;i<len;i++)
 {
   c=text[i];
 
  if (c>='a' && c<='z' || c>='A'&& c<='Z')
  {
    str[i]=text[i];
    if(flag==1)
    str[i]=toupper(text[i]); //covert to upper case
    s+=str[i];               // concatenate char by char
    flag=0;
  }
  else
  flag=1;                   // skip the underscores and dashes
 }

  return s;
}
