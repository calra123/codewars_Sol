string encrypt(string text, int rule) {

for(char &c : text)  //range based for loop and modifying string(array) in place
  c+=rule;           // c iterating over the entire string and modifying.

  return text;
};
