#include <string>

std::string DNAStrand(const std::string& dna)
{
    int len;
    len=dna.length();
    std :: string s1;
    s1=dna;       //otherwise strings remains empty and cannot be overwritten
 
  for(int i=0; i<=len;i++)
  {
      switch (dna[i])
      {
      case 'A': s1[i]='T';break;
      case 'T': s1[i]='A';break;
      case 'C': s1[i]='G';break;
      case 'G': s1[i]='C';break;
      }

 }

return s1;
}
