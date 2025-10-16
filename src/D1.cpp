#include "D1.hpp"
#include <iostream>

D1::D1(int d1, int b1, int b2, int b3) : B1(b1), B2(b2), d1_val(d1) {
  B3::setB3(b3);
  std::cout << "Конструктор D1: " << d1_val << std::endl;
}

D1::~D1() { std::cout << "Деструктор D1" << std::endl; }
void D1::show() {
  std::cout << " D1 = " << d1_val << std::endl;
  // B1::show(); // Недоступно из-за private наследования
  B2::show();
  B3::show();
}
