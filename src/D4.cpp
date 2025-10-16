#include "D4.hpp"
#include <iostream>

D4::D4(int d4, int d2, int d1, int b1, int b2, int b3)
    : B3(b3), D2(d2, d1, b1, b2, b3), d4_val(d4) {
  std::cout << "Конструктор D4: " << d4_val << std::endl;
}
D4::~D4() { std::cout << "Деструктор D4" << std::endl; }
void D4::show() {
  std::cout << "D4 = " << d4_val << std::endl;
  D2::show();
}