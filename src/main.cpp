#include <iostream>
// ... все .hpp файлы ...
#include "B1.hpp"
#include "B2.hpp"
#include "B3.hpp"
#include "D1.hpp"
#include "D2.hpp"
#include "D3.hpp"
#include "D4.hpp"

int main() {
  
  std::cout << "Создание объекта D4:" << std::endl;
  // d4, d2, d1, b1, b2, d3, b3
  D4 obj_d4(1000, 2000, 3000, 4000, 5000, 100, 6000);
  std::cout << "Вызов show() для D4:" << std::endl;
  obj_d4.show();

  std::cout << "Уничтожение объектов:";
  return 0;
}
