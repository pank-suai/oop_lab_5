#include <iostream>

#include "B1.hpp"
#include "B2.hpp"
#include "B3.hpp"
#include "D1.hpp"
#include "D2.hpp"
#include "D3.hpp"
#include "D4.hpp"

int main() {

  std::cout << "Создание объекта D3:" << std::endl;
  // d3, d2, d1, b1, b2, b3
  D3 obj_d3(100, 200, 300, 400, 500, 600);
  std::cout << "Вызов show() для D3" << std::endl;
  obj_d3.show();

  std::cout << "Создание объекта D4:" << std::endl;
  // d4, d2, d1, b1, b2, b3
  D4 obj_d4(1000, 2000, 3000, 4000, 5000, 6000);
  std::cout << "Вызов show() для D4:" << std::endl;
  obj_d4.show();

  std::cout << "Уничтожение объектов:";
  return 0;
}
