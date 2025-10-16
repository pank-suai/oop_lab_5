#include "D3.hpp"
#include <iostream>

D3::D3(int d3, int b3) : d3_val(d3) {
  B3::setB3(b3);
  std::cout << "Конструктор D3: " << d3_val << std::endl;
}

D3::~D3() { std::cout << "Деструктор D3" << std::endl; }

void D3::show() {
  std::cout << "D3 = " << d3_val << std::endl;
  B3::show();
}