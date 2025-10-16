#pragma once

#include "D1.hpp"
#include "D3.hpp"

// D2 становится точкой схождения "алмаза"
class D2 : public D1, private D3 {
private:
  int d2_val;

public:
  D2(int d2, int d1, int b1, int b2, int d3, int b3);
  ~D2();
  void show();
};