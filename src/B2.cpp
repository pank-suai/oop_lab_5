#include "B2.hpp"
#include <iostream>

B2::B2(int b2) : b2_val(b2) {
  std::cout << "Конструктор B2: " << b2_val << std::endl;
}
B2::~B2() { std::cout << "Деструктор B2" << std::endl; }
void B2::show() { std::cout << "  B2 = " << b2_val << std::endl; }