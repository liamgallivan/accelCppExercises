#include <iostream>

int main()
{
  int total = 1;
  for (int i = 1; i < 10; i++) {
    total *= i;
  }
  std::cout << "Product of numbers in range [1,10): " << total << std::endl;
}
