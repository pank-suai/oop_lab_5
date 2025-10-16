#pragma once

#include "B3.hpp"

class D3 : virtual public B3 {
private:
  int d3_val;

public:
  D3(int d3, int b3);
  ~D3();
  void show();
};
