#include "B1.hpp"
#include <iostream>

B1::B1(int b1) : b1_val(b1) {
  std::cout << "Конструктор B1: " << b1_val << std::endl;
}
B1::~B1() { std::cout << "Деструктор B1" << std::endl; }
void B1::show() { std::cout << "  B1 = " << b1_val << std::endl; }