#include "B3.hpp"
#include <iostream>

B3::B3() : b3_val(0) {
  std::cout << "Конструктор B3 по умолчанию: " << b3_val << std::endl;
}
B3::B3(int b3) : b3_val(b3) {
  std::cout << "Конструктор B3: " << b3_val << std::endl;
}
B3::~B3() { std::cout << "Деструктор B3" << std::endl; }
void B3::setB3(int val) {
  b3_val = val;
  std::cout << "B3 установлено значение: " << val << std::endl;
}
void B3::show() { std::cout << "  B3 = " << b3_val << std::endl; }
