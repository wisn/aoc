#include <iostream>
using namespace std;

int toNumber(char c) {
  return ((int) c) - 48;
}

int main() {
  string s;
  cin >> s;
  
  s += s[0];
  
  long sum = 0;
  char lst = '\0';
  for (char c : s) {
    if (c == lst) sum += toNumber(c);
    
    lst = c;
  }
  
  printf("%ld\n", sum);
  
  return 0;
}

