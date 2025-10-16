#pragma once

#include "B3.hpp"

class D2; // forward declare

class D3 : virtual public B3 {
private:
  D2* d2_member;
  int d3_val;

public:
  D3(int d3, int b3);
  D3(int d3, int d2, int d1, int b1, int b2, int b3);
  ~D3();
  void show();
};