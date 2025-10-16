#include "D2.hpp"
#include <iostream>

D2::D2(int d2, int d3, int d1, int b1, int b2, int b3) : D3(d3, b3), D1(d1, b1, b2, b3), d2_val(d2) {
  std::cout << "Конструктор D2: " << d2_val << std::endl;
}
D2::~D2() { std::cout << "Деструктор D2" << std::endl; }
void D2::show() {
  std::cout << " D2 = " << d2_val << std::endl;
  D1::show();
}