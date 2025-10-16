#pragma once

#include "B1.hpp"
#include "B2.hpp"
#include "B3.hpp"

class D1 : private B1, public B2, virtual protected B3 {
private:
  int d1_val;

public:
  D1(int d1, int b1, int b2, int b3);
  ~D1();
  void show();
};