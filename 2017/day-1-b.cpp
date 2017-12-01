#include <iostream>
using namespace std;

int toNumber(char c) {
  return ((int) c) - 48;
}

int main() {
  string s;
  cin >> s;

  int n = s.size();
  int m = n / 2;
  long sum = 0;
  
  for (int i = 0; i < n; i++) {
    int p = i + m + 1;
    
    p -= p > n ? n : 0;
    p--;
    
    if (s[i] == s[p]) sum += toNumber(s[i]);
  }
  
  printf("%ld\n", sum);
  
  return 0;
}

