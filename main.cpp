#include <iostream>

#include <iostream>

using namespace std;

bool isEven(int n) {
  return n % 2 == 0;
}
bool isOdd(int n) {
  return n % 2 == 1;
}
int main() {
  int x = 1007 ;
  if (isEven(x)) {
    std::cout << x << "  adalah Genap" << std::endl;
  } else {
    std::cout << x << "adalah Ganjil" << std::endl;
  }
  return 0;
}
