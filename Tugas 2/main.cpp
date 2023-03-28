#include <iostream>

using namespace std;
int minN(int a, int b) {
  return a < b ? a : b;
}
int maxN(int a, int b) {
  return a > b ? a : b;
}
int main() {
  int x = 100, y = 1000;
  int min = minN(x, y);
  int max = maxN(x, y);
  std::cout << "Nilai maksimal " << x << " dan " << y << " adalah " << min << std::endl;
  std::cout << "Nilai minimal " << x << " gan " << y << " adalah " << max << std::endl;
  return 0;
}
