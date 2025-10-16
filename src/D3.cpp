#include "D3.hpp"
#include "D2.hpp"
#include <iostream>

D3::D3(int d3, int b3) : B3(b3), d3_val(d3), d2_member(nullptr) {
  std::cout << "Конструктор D3: " << d3_val << std::endl;
}
D3::D3(int d3, int d2, int d1, int b1, int b2, int b3) : B3(b3), d3_val(d3), d2_member(nullptr) {
  d2_member = new D2(d2, d3, d1, b1, b2, b3);
  std::cout << "Конструктор D3: " << d3_val << std::endl;
}
D3::~D3() { if (d2_member) delete d2_member; std::cout << "Деструктор D3" << std::endl; }
void D3::show() {
  std::cout << "D3 = " << d3_val << std::endl;
  B3::show();
  if (d2_member) d2_member->show();
}