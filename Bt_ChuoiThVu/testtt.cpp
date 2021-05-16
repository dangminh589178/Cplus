#include <iostream>
int main() {
   auto s = std::to_string(7654321);
   int n = s.length() - 3;
   while (n > 0) {
      s.insert(n, ",");
      n -= 3;
   }
   std::cout << (s == "7,654,321") << std::endl;
}   
