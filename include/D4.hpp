#pragma once

#include "D2.hpp"

class D4 : protected D2 {
private:
  int d4_val;

public:
  D4(int d4, int d2, int d1, int b1, int b2, int b3);
  ~D4();
  void show();
};